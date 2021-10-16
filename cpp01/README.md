# **C++ - Module 01**

##### Memory allocation, references, pointers to members, switch

메모리 할당, 참조, 멤버 포인터, switch

##### _Summary: This document contains the subject for Module 01 of the C++ modules._

_요약: 이 문서는 C++ 모듈의 01번째 모듈 서브젝트를 담고 있습니다._

<br>

# **Contents**

| Chapter | Contents                                            | page |
| :-----: | :-------------------------------------------------- | :--: |
|    1    | [**General Rules**](#Chapter-1)                     |  2   |
|    2    | [**Exercise 00: BraiiiiiiinnnzzzZ**](#Chapter-2)    |  4   |
|    3    | [**Exercise 01: Moar brainz!**](#Chapter-3)         |  5   |
|    4    | [**Exercise 02: HI THIS IS BRAIN**](#Chapter-4)     |  6   |
|    5    | [**Exercise 03: Unnecessary violence**](#Chapter-5) |  7   |
|    6    | [**Exercise 04: Sed is for losers**](#Chapter-6)    |  9   |
|    7    | [**Exercise 05: Karen 2.0**](#Chapter-7)            |  10  |
|    8    | [**Exercise 06: Karen-filter**](#Chapter-8)         |  12  |

<br>

# **Chapter 1**

## General rules

<br>

##### _For the C++ modules you will use and learn C++98 only. The goal is for you to learn the basic of an object oriented programming language. We know modern C++ is way different in a lot of aspects so if you want to become a proeficient C++ developper you will need modern standard C++ later on. This will be the starting point of your C++ journey it’s up to you to go further after the 42 Common Core!_

C++ 모듈에선 C++98만을 사용하고 배울 것입니다. 모듈 과제의 최종 목표는 여러분이 객체 지향 프로그래밍의 기초에 대해 익히는 것이죠. 물론 저희도 최신 C++이 여러 측면에서 많은 변화가 있었다는 사실을 알고 있습니다. 그렇기에 여러분이 숙련된 C++ 개발자가 되기 위해서 최신 표준 C++을 익히는 건 뒤로 미룰 필요가 있습니다. C++ 모듈들은 여러분이 C++ 여정을 시작하는 좋은 출발점이 될 것이고, 42 이너 서클을 통과하고서도 더 멀리 나갈지는 여러분의 몫입니다!

- ##### _Any function implemented in a header (except in the case of templates), and any unprotected header, means 0 to the exercise._

  (템플릿의 경우를 제외한) 헤더에 함수가 구현되거나, 헤더가 보호되지 않으면 과제는 0점 처리됩니다.

- ##### _Every output goes to the standard output, and will be ended by a newline, unless specified otherwise._

  모든 출력은 표준 출력으로 전달되어야 하며, 서브젝트에 명시되지 않은 이상 개행으로 끝나야 합니다.

- ##### _The imposed filenames must be followed to the letter, as well as class names, function names and method names._

  파일명, 클래스명, 함수명, 메소드명은 서브젝트에 명시된 것을 정확히 따라야 합니다.

- ##### _Remember: You are coding in `C++` now, not in `C` anymore. Therefore:_

  기억하세요: 여러분은 이제 `C`가 아닌 `C++`로 코딩을 해야 합니다. 그러므로:

  - ##### _The following functions are FORBIDDEN, and their use will be punished by a 0, no questions asked: `*alloc`, `*printf` and `free`._

    다음의 함수들은 사용이 **금지됩니다**. 사용이 발각될 시에는 0점이 부여됩니다. 어떠한 변명도 받지 않습니다 : `*alloc`, `*printf`, `free`

  - ##### _You are allowed to use basically everything in the standard library. HOWEVER, it would be smart to try and use the C++-ish versions of the functions you are used to in C, instead of just keeping to what you know, this is a new language after all. And NO, you are not allowed to use the STL until you actually are supposed to (that is, until module 08). That means no vectors/lists/maps/etc... or anything that requires an include `<algorithm>` until then._
    여러분은 표준 라이브러리에 있는 거의 모든 것들을 사용 가능합니다. **단**, 최대한 C에서 사용하던 함수의 C++ 버전을 찾아 응용하는 것이 현명할 것입니다. 새로운 언어를 사용하는 만큼, 기존에 알던 내용을 그대로 쓰는 것보단 나을 테니까요. 그리고, STL이 사용가능한 과제가 나오기 전까지 STL은 **금지**됩니다. (module 08 전까진 쭉 사용 불가능하다는 의미입니다.) 이건 곧 벡터 / 리스트 / 맵 등등... `<algorithm>` 헤더를 불러와야만 사용가능한 요소들을 사용할 수 없다는 뜻이에요.

- ##### _Actually, the use of any explicitly forbidden function or mechanic will be punished by a 0, no questions asked._

  서브젝트에서 명시적으로 금지한 함수나 기능들을 사용할 경우에는 벌로 0점이 부여됩니다. 질문 안 받아요.

- ##### _Also note that unless otherwise stated, the C++ keywords "`using namespace`" and "`friend`" are forbidden. Their use will be punished by a -42, no questions asked._

  마찬가지로, 명시되지 않은 이상 "`using namespace`" 키워드와 "`friend`" 키워드는 금지됩니다. 사용 시에는 벌로 -42점이 부여됩니다. 질문 안 받습니다!

- ##### _Files associated with a class will always be `ClassName.hpp` and `ClassName.cpp`, unless specified otherwise._

  클래스와 관련된 파일들의 이름은 따로 명시되지 않은 이상 반드시 `클래스명.hpp`, `클래스명.cpp` 와 같이 작성되어야 합니다.

- ##### _Turn-in directories are `ex00/`, `ex01/`, ... , `exn/`._

  제출되어야 하는 디렉토리는 `ex00/`, `ex01/`, ... , `exn/` 형식입니다.

- ##### _You must read the examples thoroughly. They can contain requirements that are not obvious in the exercise’s description. If something seems ambiguous, you don’t understand C++ enough._

  예시를 세심히 살펴보세요. 연습 문제의 설명에 명시되어 있지 않은 필요사항을 담고 있을지도 모릅니다. 모호하다 싶은 것이 있으면, 그건 여러분이 C++을 충분히 이해하지 못했기 때문이에요.

- ##### _Since you are allowed to use the `C++` tools you learned about since the beginning, you are not allowed to use any external library. And before you ask, that also means no `C++11` and derivates, nor Boost or anything your awesomely skilled friend told you `C++` can’t exist without._

  여러분이 과제 초반부터 숙지해야 할 `C++` 기능들은 전부 사용가능하므로, 그 외의 확장 라이브러리는 사용이 금지됩니다. 이 말인 즉슨, `C++11`와 그 파생, Boost는 물론이고 여러분 주변의 `C++` 초고수 친구가 이거 없으면 `C++` 못 쓴다면서 강력 추천하는 것들도 전부 금지에요!

- ##### _You may be required to turn in an important number of classes. This can seem tedious, unless you’re able to script your favorite text editor._

  꽤 많은 클래스들을 제출해야 할 지도 몰라요. 여러분의 취향에 맞는 텍스트 편집기를 사용하지 않으면 좀 지루한 작업이 될 겁니다.

- ##### _Read each exercise FULLY before starting it! Really, do it._

  각 과제를 전부 제대로 읽은 뒤에 시작하세요! 진짜, 제발요.

- ##### _The compiler to use is `clang++`._

  사용할 컴파일러는 `clang++`입니다.

- ##### _Your code has to be compiled with the following flags : `-Wall -Wextra -Werror`._

  여러분의 코드는 다음과 같은 플래그와 함께 컴파일되어야 합니다 : `-Wall -Wextra -Werror`

- ##### _Each of your includes must be able to be included independently from others. Includes must contains every other includes they are depending on, obviously._

  각 includes는 다른 것들과 독립적으로 불러와져야 합니다. 당연하지만, Includes는 그들이 의존성을 갖는 다른 includes를 모두 포함해야 합니다.

- ##### _In case you’re wondering, no coding style is enforced during in C++. You can use any style you like, no restrictions. But remember that a code your peer-evaluator can’t read is a code she or he can’t grade._

  궁금하신 분들이 있을까 싶어 말씀드리자면, `C++`에선 강제되는 코딩 스타일이 없습니다. 여러분이 원하시는 스타일 대로 마음껏 코드를 구성하세요. 단, 평가자가 이해할 수 없는 코드를 작성하시면 점수 또한 받기 힘들어집니다.

- ##### _Important stuff now : You will NOT be graded by a program, unless explictly stated in the subject. Therefore, you are afforded a certain amount of freedom in how you choose to do the exercises. However, be mindful of the constraints of each exercise, and DO NOT be lazy, you would miss a LOT of what they have to offer !_

  지금부터 중요한 사항 알려드립니다: 과제에서 명시되지 않은 이상, 기계채점은 **이루어지지 않을** 것입니다. 그 말인 즉슨, 과제를 어떻게 수행할 지에 대해 꽤 많은 자유도가 부여된다는 것이죠! 단, 각 연습 문제들의 제약사항을 꼭 명심하시고, 게으름뱅이가 **되려 하지 마세요**. 과제에서 요구하는 **많은** 사항들을 놓쳐버릴 지도 몰라요!

- ##### _It’s not a problem to have some extraneous files in what you turn in, you may choose to separate your code in more files than what’s asked of you. Feel free, as long as the result is not graded by a program._

  제출 파일 중에 관련없는 파일이 섞여있어도 무방합니다. 코드를 여러 파일로 분리하여 요구사항보다 더 많은 양의 파일을 제출해도 좋아요. 기계 평가가 존재하지 않는 이상, 자유롭게 제출하세요.

- ##### _Even if the subject of an exercise is short, it’s worth spending some time on it to be absolutely sure you understand what’s expected of you, and that you did it in the best possible way._

  과제나 연습 문제가 짧더라도, 충분한 시간을 들여 과제가 여러분에게 요구하는 바가 무엇인지 최대한 이해하고, 가능한 한 최선의 방법으로 수행하는 것을 추천합니다.

- ##### _By Odin, by Thor! Use your brain!!!_
  오딘의 힘으로, 토르의 힘으로! 머리를 굴려보세요!!!

<br>

# **Chapter 2**

## Exercise 00: BraiiiiiiinnnzzzZ

<br>

| **CPP Module**                         | Exercise 00                                                                  |
| -------------------------------------- | ---------------------------------------------------------------------------- |
| Exercise 00 : 뇌ㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣ |
| **제출할 폴더**                        | ex00/                                                                        |
| **제출할 파일**                        | `Makefile, main.cpp, Zombie.cpp, Zombie.hpp, newZombie.cpp, randomChump.cpp` |
| **금지된 함수**                        | `None`                                                                       |

<br>

##### _First, make a `Zombie` class. The zombies have a private name and are able to `announce` themselves like:_

`Zombie` 클래스를 만드세요. 좀비는 각자의 private한 이름이 있어야 하고, 다음과 같은 방식으로 `자기소개 (announce)`할 수 있어야 합니다 :

```
<name> BraiiiiiiinnnzzzZ...
```

##### _Yes, `announce`( `void` ) is a member function. Also, add a debugging message in the destructor including de name of the `Zombie`._

맞아요! `announce`(`void`) 는 멤버 함수입니다. 그리고, 소멸자에 `Zombie`의 이름을 포함한 디버깅 메시지를 추가하세요.

##### _After this, write a function that will create a `Zombie`, name it, and return it to be used somewhere else in your code. The prototype of the function is:_

앞의 요구사항이 충족되면, `Zombie`를 생성하고, 이름짓고, 코드의 어디에선가 재사용할 수 있도록 반환하는 함수를 작성하세요. 함수의 프로토타입은 다음과 같습니다 :

```cpp
Zombie* newZombie( std::string name );
```

##### _You will also have to write another function that will create a `Zombie`, and make it `announce` itself. The prototype of the function is:_

이번에는 `Zombie`를 생성하고, 스스로 `announce`하도록 하는 함수를 작성하세요. 프로토타입은 다음과 같습니다:

```cpp
void randomChump( std::string name );
```

##### _Now the actual point of the exercise: your `Zombies` must be destroyed at the appropriate time (when they are not needed anymore). They must be allocated on the stack or the heap depending on its use: sometimes it’s appropriate to have them on the stack, at other times the heap may a better choice._

여기부터가 이번 과제의 본편입니다: 여러분의 `Zombie`는 적절한 때 소멸해야 합니다 (좀비들이 필요없어질 때요). 그들은 사용 방식에 따라 스택 영역 또는 힙 영역에 적절히 할당되어 있어야 합니다: 어떨 땐 스택에 할당하는 것이 나을 수 있고, 어떨 땐 힙이 나을 거에요.

<br>

# **Chapter 3**

## Exercise 01: Moar brainz!

<br>

| **CPP Module**              | Exercise 01                                                   |
| --------------------------- | ------------------------------------------------------------- |
| Exercise 01 : 더 만은 뇌들! |
| **제출할 폴더**             | ex01/                                                         |
| **제출할 파일**             | `Makefile, main.cpp, Zombie.cpp, Zombie.hpp, ZombieHorde.cpp` |
| **금지된 함수**             | `None`                                                        |

<br>

##### _Re-using the `Zombie` class, now we are going to create an horde of zombies!_

앞서 작성한 `Zombie` 클래스를 재활용해서, 좀비 무리를 만들어봅시다!

##### _Write a function that takes an integer N. When called, it allocates N `Zombie` objects. It must allocate all the N `Zombie` objects in a single allocation. Then, it should initialize each `Zombie` by giving to each one a name. Last, it should return the pointer to the first `Zombie`. The function is prototyped as follows:_

정수 N을 인자로 받는 함수를 작성하세요. 함수가 호출되면, N마리의 `Zombie` 객체를 할당합니다. N마리의 `Zombie`들은 한 번에 할당되어야 해요. 그 뒤에, 각 `Zombie`들을 각각 이름을 부여하면서 초기화해 주어야 합니다. 마지막으로, 첫 번째 `Zombie`의 주소값을 리턴합니다. 함수의 프로토타입은 다음과 같습니다:

```cpp
Zombie* zombieHorde( int N, std::string name );
```

##### _Submit a main to test that your function `zombieHorde` works as intended. You may want to do so by calling `announce()` on each one of the `Zombies`. Do not forget to delete ALL the `Zombies` when you don’t need them anymore._

여러분의 `zombieHorde` 함수가 예상과 같이 동작하는 지 테스트하기 위해 적당한 main문을 작성하세요. 테스트를 위해선, 각 `Zombie`들마다 `announce()` 함수를 호출하는 부분이 필요할 겁니다. 모든 `Zombie`들이 필요없어졌을 때 **전부** 삭제되어야 함을 잊지 마세요.

<br>

# **Chapter 4**

## Exercise 02: HI THIS IS BRAIN

<br>

| **CPP Module**              | Exercise 02          |
| --------------------------- | -------------------- |
| Exercise 02: 안뇽 나는 뇌야 |
| **제출할 폴더**             | ex02/                |
| **제출할 파일**             | `Makefile, main.cpp` |
| **금지된 함수**             | `None`               |

<br>

##### _Make a program in which you will create a string containing "`HI THIS IS BRAIN`". Create a `stringPTR` which is a pointer to the string; and a `stringREF` which is a reference to the string._

"`HI THIS IS BRAIN`" 이라는 내용물을 담은 문자열을 생성하는 프로그램을 작성하세요. 문자열의 주소를 담은 `stringPTR` 을 생성하세요; 그리고 문자열의 참조를 담은 `stringREF`도요.

##### _Now, display the address in memory of the string. Next, display the address of the string by using `stringPTR` and `stringREF`._

이제, 문자열의 메모리상 주소를 출력하세요. 그리고, 문자열의 주소를 `stringPTR`과 `stringREF`을 이용하여 각각 출력해보세요.

##### _Last, display the string using the pointer, and finally display it using the reference._

마지막으로, 문자열을 포인터를 이용하여 출력하고, 참조를 이용하여 출력해 보세요.

##### _That’s all, no tricks. The goal of this exercise is to make you demystify references. It isn’t something completely new, it is just another syntax for something that you already know: addresses. Even there are some tiny-little-minuscule details._

이게 끝이에요. 별 거 없어요. 이 과제의 최종 목표는 '참조' 개념에 대해 조금 더 익숙해지는 것입니다. 새로운 개념이 아니에요, 이미 알고 있는 개념을 다르게 표현하는 것 뿐이죠 : 주소 말이에요. 아주 작고 사소하고 미세한 차이점이 있을지라도요.

<br>

# **Chapter 5**

## Exercise 03: Unnecessary violence

<br>

| **CPP Module**             | Exercise 03                                                                                  |
| -------------------------- | -------------------------------------------------------------------------------------------- |
| Exercise 03: 불필요한 폭력 |
| **제출할 폴더**            | ex03/                                                                                        |
| **제출할 파일**            | `Makefile, main.cpp, Weapon.cpp, Weapon.hpp, HumanA.cpp, HumanA.hpp, HumanB.cpp, HumanB.hpp` |
| **금지된 함수**            | `None`                                                                                       |

<br>

##### _Make a `Weapon` class, that has a `type` string, and a `getType` method that returns a const reference to this string. It also has a `setType`, of course!_

`Weapon` 클래스를 만드세요. 해당 클래스는 문자열 `자료형`과, 해당 문자열의 상수 참조를 반환하는 `getType`메소드를 포함해야 합니다. 아, 당연히 `setType`도 있어야 해요!

##### _Now, create two classes, `HumanA` and `HumanB`, that both have a `Weapon`, a name, and an `attack()` function that displays:_

이제, `HumanA`와 `HumanB`라는 두 개의 클래스를 만드세요. 두 클래스 모두 `Weapon`과 이름, 다음과 같은 문자열을 출력하는 `attack()` 함수를 포함해야 합니다:

```
NAME attacks with his WEAPON_TYPE
```

##### _`HumanA` and `HumanB` are almost-almost the same; there are only two tiny-little-minuscule details:_

`HumanA`와 `HumanB`는 정말-거의 비슷합니다. 두 개의 미세하고 조그마한 차이밖에 없어요 :

- ##### _While `HumanA` takes the `Weapon` in its constructor, `HumanB` doesn’t._

  `HumanA`는 생성자에서 `Weapon`을 지니지만, `HumanB`는 그렇지 않습니다.

- ##### _`HumanB` may not always have a `Weapon`, but `HumanA` will ALWAYS be armed._
  `HumanB`는 `Weapon`이 없을 수도 있지만, `HumanA`는 **항상** 무장한 상태입니다.

##### _Make it so the following code produces attacks with "crude spiked club" THEN "some other type of club", in both test cases:_

다음과 같은 코드가 아래의 두 가지 경우 모두 "crude spiked club"과 "some other type of club"으로 공격할 수 있도록 하세요.

```cpp
int main()
{
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
}
```

##### _In which case is it appropriate to store the `Weapon` as a pointer? And as a reference? Why?_

포인터와 참조 중 어느 쪽이 더 `Weapon`을 저장하기 편리했나요? 이유는요?

##### _These are the questions you should ask yourself before turning in this exercise._

과제를 제출하기 전 스스로에게 꼭 질문해 보세요.

<br>

# **Chapter 6**

## Exercise 04: Sed is for losers

<br>

| **CPP Module**                          | Exercise 04                                            |
| --------------------------------------- | ------------------------------------------------------ |
| Exercise 04: sed는 패배자들이나 쓰는 것 |
| **제출할 폴더**                         | ex04/                                                  |
| **제출할 파일**                         | `Makefile, main.cpp, 그리고 여러분에게 필요한 모든 것` |
| **금지된 함수**                         | `None`                                                 |

<br>

##### _Make a program called `replace` that takes a filename and two strings, let’s call them s1 and s2, that are NOT empty._

`replace`란 이름의 프로그램을 작성하세요. 프로그램은 파일명과 두 개의 문자열을 인자로 받아야 합니다. 두 문자열은 각각 s1, s2라 할게요. 문자열은 비어 있으면 **안 됩니다**.

##### _It will open the file, and write its contents to FILENAME.replace, after replacing every occurrence of s1 with s2._

프로그램은 파일을 열고, 파일 내의 모든 s1을 s2로 대체한 후에 결과물을 FILENAME.replace에 저장해야 합니다.

##### _All the member functions of the class std::string are allowed, except replace. Use them wisely!_

replace를 제외한 모든 std::string 클래스의 멤버 함수들을 사용 가능합니다. 현명하게 사용하세요!

##### _Of course, you will handle errors as best you can. Do not use the C file manipulation functions, because that would be cheating, and cheating’s bad, m’kay?_

당연히, 에러는 최선을 다해 막아주어야 합니다. C 파일 관리 함수들을 불러오지 마세요. 이건 치팅이구요, 치팅은 나쁘잖아요. 오키?

##### _You will turn in some test files to show your program works._

여러분의 프로그램이 제대로 동작하는지를 보여주기 위한 테스트 파일을 함께 제출하세요.

<br>

# **Chapter 7**

## Exercise 05: Karen 2.0

<br>

| **CPP Module**        | Exercise 05                                    |
| --------------------- | ---------------------------------------------- |
| Exercise 05: 카렌 2.0 |
| **제출할 폴더**       | ex05/                                          |
| **제출할 파일**       | `Makefile, main.cpp, Karen.hpp, and Karen.cpp` |
| **금지된 함수**       | `None`                                         |

<br>

##### _Do you know Karen? We all do, no? In case you don’t, here are the kind of comments that Karen does:_

[카렌](<https://en.wikipedia.org/wiki/Karen_(slang)>)이 누구인지 아시나요? 다 아시죠? 아닌가요? 모르실 때를 대비해서, '카렌' 이 주로 할 법한 대사를 몇 자 적어보겠습니다.

- ##### _"**DEBUG**" level: Messages in this level contain extensive contextual information. They are mostly used for problem diagnosis. Example: "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"_

  "**DEBUG**" 레벨: 이 레벨의 메시지는 광범위한 상황별 정보를 포함합니다. 문제 진단에 사용됩니다. 예시: "나는 패티 7장이랑 피클 3개 추가한 더블 쿼터 파운더 치즈 버거에 베이컨 서비스 받는 게 너무 좋아. 너무 맛있엉!"

- ##### _"INFO" level: These messages contain some contextual information to help trace execution in a production environment. Example: "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"_

  "**INFO**" 레벨: 메시지는 운영 환경에서의 실행 상황을 추적하는 데 도움을 주는 몇 가지 상황별 정보가 담겨 있습니다. 예시: "햄버거에 베이컨을 추가하는 데 추가금이 든다니, 믿을 수 없어! 쥐꼬리만큼 넣어주잖아! 이딴 식이면 추가해달라고 하지도 않았겠지!"

- ##### _"WARNING" level: A warning message indicates a potential problem in the system. The system is able to handle the problem by itself or to proceed with this problem anyway. Example: "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."_

  "**WARNING**" 레벨: 경고 메시지는 시스템에서 발생가능한 문제를 알려줍니다. 시스템은 이러한 문제들을 스스로 해결하거나, 문제가 발생해도 강행할 수 있습니다. 예시: "솔직히 난 베이컨을 무료로 추가 받을 자격이 있다고 생각해. 난 여기 몇 년째 단골손님이지만, 당신은 저번 달부터 근무한 초짜잖아."

- ##### _"ERROR" level: An error message indicates a serious problem in the system. The problem is usually non-recoverable and requires manual intervention. Example: "This is unacceptable, I want to speak to the manager now."_
  "**ERROR**" 레벨: 에러 메시지는 시스템에서 발생한 심각한 문제를 알려줍니다. 이러한 문제들은 대개 복구하기 어려우며, 수동으로 개입해야 합니다. 예시: "몰라, 난 용납 못해. 매니저 부를거야."

##### _We are going to automate Karen, she says always the same things. You have to create a class named `Karen` which will contain the following private member functions:_

지금부터 우리는 카렌을 자동화해 볼 겁니다. 그녀는 항상 똑같은 말만 반복하죠. `Karen` 이라는 이름의 클래스를 만들고, 다음과 같은 private 멤버 함수를 만드세요:

```cpp
void debug( void );
void info( void );
void warning( void );
void error( void );
```

##### _Karen also has to have a public function that calls to the private functions depending on the level that is passed as parameter. The prototype of the function is:_

카렌에겐 인자로 받은 레벨에 따라 서로 다른 private 함수를 호출하는 public 함수가 필요합니다. 이 함수의 프로토타입은 다음과 같지요:

```cpp
void complain( std::string level );
```

##### _The goal of this exercise is to use pointers to member functions. This is not a suggestion, Karen has to complain without using a forest of if/elseif/else, she doesn’t hesitate or think twice!_

이번 과제의 목표는 멤버 함수에 대한 포인터를 사용해보는 것입니다. 이건 선택사항이 아니에요. 카렌은 if, elseif, else 범벅을 사용하지 않고 불만을 토로해야 합니다. 그녀는 망설임도 없고, 두 번 생각하지 않아요!

##### _Submit a main to test that Karen complains a lot. It is okay if you want to use the complains we give as example._

카렌이 불평불만을 잔뜩 늘어놓는 것을 테스트할 수 있도록 main문을 작성하세요. 저희가 예시로 들어 둔 불평 대사를 사용해도 상관 없습니다.

<br>

# **Chapter 8**

## Exercise 06: Karen-filter

<br>

| **CPP Module**         | Exercise 06                                    |
| ---------------------- | ---------------------------------------------- |
| Exercise 06: 카렌 필터 |
| **제출할 폴더**        | ex06/                                          |
| **제출할 파일**        | `Makefile, main.cpp, Karen.hpp, and Karen.cpp` |
| **금지된 함수**        | `None`                                         |

<br>

##### _We are going to implement a system to filter if what Karen says is actually important or not, because sometimes we don’t want to pay attention to everything Karen says._

이번에는 카렌이 하는 말이 중요한 말인지 아닌지 걸러내는 시스템을 구현해 볼 거에요. 가끔은 카렌이 뭐라 하든 별로 신경쓰고 싶지 않을 때가 있으니까요.

##### _You have to write the program `karenFilter` that will receive as a parameter the log level you want to listen to and display all the info that is at this level or above it. For example:_

`karenFilter` 라는 프로그램을 작성하세요. 해당 프로그램은 인자값으로 여러분이 확인하고 싶은 로그 레벨을 받으며, 해당 레벨 또는 그 이상의 레벨에 대한 모든 정보를 출력합니다. 예시는 다음과 같습니다:

```sh
$> ./karenFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I’ve been coming here for years an you just started working here last month.

[ ERROR ]
This is unacceptable, I want to speak to the manager now.

$> ./karenFilter "I am not sure how tired I am today..."
[ Probably complaining about insignificant problems ]
```

##### _There are many ways to filter karen, but one of the best ones is to SWITCH her off ;)_

카렌의 말을 걸러내는 방법은 여러 가지가 있지만, 가장 좋은 건 그녀의 **스위치**를 꺼 버리는 거겠죠? ;)