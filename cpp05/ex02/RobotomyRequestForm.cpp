#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("ShrubberyCreation_", 72, 45), target("")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("ShrubberyCreation_" + target, 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rr) : Form(rr.getName(), 72, 45), target(rr.getTarget())
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &)
{
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExcuteGrade())
		throw Form::GradeTooLowException();
	else
	{
		std::random_device rd;	// 시드값을 얻기 위한 random_device 생성.
		std::mt19937 gen(rd());	// random_device 를 통해 난수 생성 엔진을 초기화 한다.
		std::uniform_int_distribution<int> dis(0, 99);	// 0 부터 99 까지 균등하게 나타나는 난수열을 생성하기 위해 균등 분포 정의.

		if (dis(gen) % 2)
			std::cout << "(drill...) <" << this->target << "> has been robotomized successfully." << std::endl;
		else
			std::cout << "<" << this->target << "> fail to be robotomized." << std::endl;
	}
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->target;
}