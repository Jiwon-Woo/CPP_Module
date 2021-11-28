# **C++ - Module 02**

##### Ad-hoc polymorphism, operators overload and orthodox canonical classes

임시 다형성, 연산자 오버로딩과 정통적인 캐노니컬 클래스

##### _Summary: This document contains the subject for Module 02 of the C++ modules._

_요약: 이 문서는 C++ 모듈의 02번째 모듈 서브젝트를 담고 있습니다._

<br>

# **Contents**

## Contents

| Chapter | Contents                                                               | Page |
| :-----: | :--------------------------------------------------------------------- | :--: |
|    I    | [**General rules**](#Chapter-1)                                        |  2   |
|   II    | [**Bonus rules**](#Chapter-2)                                          |  4   |
|   III   | [**Exercise 00: My First Orthodox Class**](#Chapter-3)                 |  5   |
|   IV    | [**Exercise 01: Towards a more useful fixed point class**](#Chapter-4) |  7   |
|    V    | [**Exercise 02: Now we’re talking**](#Chapter-5)                       |  9   |
|   VI    | [**Exercise 03: Fixed point expressions**](#Chapter-6)                 |  11  |

<br>

# **Chapter 1**

## General rules

<br>

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

## Bonus rules

<br>

- ##### _From now on, each class you write MUST be in orthodox canonical form: At least one default constructor, a copy contructor, an assignation operator overload and a destructor. We won’t ask again._
  지금부터, 여러분이 작성하는 모든 클래스는 **반드시** 정통적인 캐노니컬 폼으로 작성되어야 합니다: 최소한 하나의 기본 생성자, 복사 생성자, 대입 연산자 오버로딩과 소멸자를 포함해야 한다는 의미이죠. 다시 언급하지 않을 것이니 꼭 기억해 두세요.

<br>

# **Chapter 3**

## Exercise 00: My First Orthodox Class

<br>

| **CPP Module**                       | Exercise 00                                   |
| ------------------------------------ | --------------------------------------------- |
| Exercise 00 : 내 첫 번째 정통 클래스 |
| **제출할 폴더**                      | ex00/                                         |
| **제출할 파일**                      | `Makefile, main.cpp, Fixed.hpp and Fixed.cpp` |
| **금지된 함수**                      | `None`                                        |

<br>

##### _You know integers and you also know floating point numbers. How cute._

여러분은 이미 정수형과 부동 소수점 자료형에 대해 알고 계시죠. 귀여워라.

##### _Please read this 3-page article ([1](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html), [2](http://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html), [3](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html)) to discover that you don’t. Go on, read it._

다음의 세 페이지 문서를 읽어 보시고 ([1](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html), [2](http://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html), [3](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html)) 여러분이 사실 이것들에 대해 아무것도 모른다는 것을 깨닫길 바래요. 어서 읽어 보시죠.

##### _Until today, any numbers you used in your programs were basically integers or floating point numbers, or any of their variants (`short, char, long, double`, etc). From your previous reading, it’s safe to assume that integers and floating point numbers have opposite caracteristics._

여태까지 여러분이 사용하던 모든 숫자는 정수형이나 부동 소수점 수, 또는 그것들의 변종들 (`short, char, long, double` 등등...) 이었어요. 앞서 읽은 문서에 따르면, 정수와 부동 소수점 수는 서로 반대되는 특성을 가지고 있다고 가정해도 무방합니다.

##### _But today, this will change. You are going to discover a new and awesome number type: fixed point numbers! Always missing from most languages scalar types, fixed point numbers offer a valuable balance between performance, accuracy, range and precision that explains why these numbers are widely used in graphics, sound or scientific programming to name a few._

다만 지금부턴 그 생각을 바꿔볼 거에요. 여러분은 '고정 소수점 수' 라는 새롭고 놀라운 수 자료형을 배울 것이랍니다! 대부분의 프로그래밍 언어의 스칼라 데이터 타입에서 누락되어 있는 고정 소수점 수는 성능과 정확도, 범위와 정밀도 간의 가치 있는 균형을 제공하며, 왜 이러한 숫자가 그래픽, 음악 또는 과학적 프로그래밍 영역 등지에서 폭 넓게 사용되는 지 아실 수 있을 겁니다.

##### _As `C++` lacks fixed point numbers, you’re going to add them yourself today. I’d recommend [this](http://inst.eecs.berkeley.edu/~cs61c/sp06/handout/fixedpt.html) article from `Berkeley` as a start. If it’s good for them, it’s good for you. If you have no idea what `Berkeley` is, read [this](https://en.wikipedia.org/wiki/University_of_California,_Berkeley#Notable_alumni.2C_faculty.2C_and_staff) section of their wikipedia page._

다만 `C++`이 고정 소수점 수에 대한 지원이 약하기 때문에, 여러분이 직접 고정 소수점에 대한 부분을 추가하셔야 해요. 시작하기 전에 `버클리` 대학에서 작성된 [이](http://inst.eecs.berkeley.edu/~cs61c/sp06/handout/fixedpt.html) 문서를 읽어보는 것을 추천드립니다. `버클리` 대학이 뭐 하는 곳인지 감이 안 잡히신다면, 위키피디아의 [이](https://en.wikipedia.org/wiki/University_of_California,_Berkeley#Notable_alumni.2C_faculty.2C_and_staff) 문서를 한번 참고해 보시죠.

##### _Write an orthodox class to represent fixed point numbers:_

고정 소수점 수를 표현하는 정통 클래스를 다음과 같이 작성하세요:

- ##### _Private members:_

  Private 멤버들:

  - ##### _An integer to store the fixed point value._

    고정 소수점 값을 저장할 정수형 변수.

  - ##### _A static constant integer to store the number of fractional bits. This constant will always be the litteral 8._
    분수 비트의 수를 저장하는 정적 정수형 상수. 이 상수는 항상 8의 값을 갖습니다.

- ##### _Public members:_

  Public 멤버들:

  - ##### _A default constructor that initializes the fixed point value to 0._

    고정 소수점 값을 0으로 초기화해 줄 기본 생성자.

  - ##### _A destructor._

    소멸자.

  - ##### _A copy constructor._

    생성자 복사본.

  - ##### _An assignation operator overload._

    대입 연산자 오버로딩.

  - ##### _A member function `int getRawBits( void ) const;` that returns the raw value of the fixed point value._

    고정 소수점 값 원본을 반환하는 멤버 함수 `int getRawBits( void ) const;`

  - ##### _A member function `void setRawBits( int const raw );` that sets the raw value of the fixed point value._
    고정 소수점 값 원본을 설정하는 멤버 함수 `void setRawBits( int const raw );`

##### _The code:_

다음의 코드는:

```cpp
#include <iostream>

int main( void ) {
  Fixed a;
  Fixed b( a );
  Fixed c;

  c = b;

  std::cout << a.getRawBits() << std::endl;
  std::cout << b.getRawBits() << std::endl;
  std::cout << c.getRawBits() << std::endl;

  return 0;
}
```

##### _Should output something like:_

다음과 같은 결과를 출력해야 합니다:

```sh
$> ./a.out
Default constructor called
Copy constructor called
Assignation operator called // <-- This line may be missing depending on your implementation
getRawBits member function called
Default constructor called
Assignation operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
$>
```

<br>

# **Chapter 4**

## Exercise 01: Towards a more useful fixed point class

<br>

| **CPP Module**                                            | Exercise 01                                   |
| --------------------------------------------------------- | --------------------------------------------- |
| Exercise 01 : 조금 더 쓸 만한 고정 소수점 클래스를 향하여 |
| **제출할 폴더**                                           | ex01/                                         |
| **제출할 파일**                                           | `Makefile, main.cpp, Fixed.hpp and Fixed.cpp` |
| **허용되는 함수**                                         | `roundf (from <cmath>)`                       |

<br>

##### _Ok, `ex00` was a good start, but our class is still pretty useless, being only able to represent the fixed point value `0.0`. Add the following public constructors and public member functions to your class:_

좋아요, `ex00`은 꽤 좋은 시작이었어요. 다만 우리가 만든 클래스는 고정 소수점 값 `0.0`만 표시할 수 있다는 점에서 아직 쓸모가 없는 것 같네요. 다음과 같은 Public 생성자와 Public 멤버 함수들을 클래스에 추가해 보세요:

- ##### _A constructor that takes a constant integer as a parameter and that converts it to the correspondant fixed(8) point value. The fractional bits value is initialized like in `ex00`._

  매개 변수로 정수형 상수를 받아와 이를 대응되는 고정 (8) 소수점 값으로 변환하는 생성자. 분수 비트 값은 `ex00` 때와 같이 초기화됩니다.

- ##### _A constructor that takes a constant floating point as a parameter and that converts it to the correspondant fixed(8) point value. The fractional bits value is initialized like in `ex00`._

  매개 변수로 부동 소수점 상수를 받아와 이를 대응되는 고정 (8) 소수점 값으로 변환하는 생성자. 분수 비트 값은 `ex00` 때와 같이 초기화됩니다.

- ##### _A member function `float toFloat( void ) const;` that converts the fixed point value to a floating point value._

  고정 소수점 값을 부동 소수점 값으로 변환하는 멤버 함수 `float toFloat( void ) const;`

- ##### _A member function `int toInt( void ) const;` that converts the fixed point value to an integer value._
  고정 소수점 값을 정수 값으로 변환하는 멤버 함수 `int toInt( void ) const;`

##### _You will also add the following function overload to your header (declaration) and source (definition) files:_

여러분은 다음과 같은 함수 오버로딩을 헤더 (선언) 와 소스 파일 (정의) 에 추가하여야 합니다:

- ##### _An overload to the « operator that inserts a floating point representation of the fixed point value into the parameter output stream._

  매개변수의 출력 스트림에 고정 소수점 값의 부동 소수점 표현을 삽입하는 « 연산자 오버로딩

##### _The code:_

다음의 코드는:

```cpp
#include <iostream>

int main( void ) {
  Fixed a;
  Fixed const b( 10 );
  Fixed const c( 42.42f );
  Fixed const d( b );

  a = Fixed( 1234.4321f );

  std::cout << "a is " << a << std::endl;
  std::cout << "b is " << b << std::endl;
  std::cout << "c is " << c << std::endl;
  std::cout << "d is " << d << std::endl;

  std::cout << "a is " << a.toInt() << " as integer" << std::endl;
  std::cout << "b is " << b.toInt() << " as integer" << std::endl;
  std::cout << "c is " << c.toInt() << " as integer" << std::endl;
  std::cout << "d is " << d.toInt() << " as integer" << std::endl;
  return 0;
}
```

##### _Should output something like:_

다음과 같은 결과를 출력해야 합니다:

```sh
$> ./a.out
Default constructor called
Int constructor called
Float constructor called
Copy constructor called
Assignation operator called
Float constructor called
Assignation operator called
Destructor called
a is 1234.43
b is 10
c is 42.4219
d is 10
a is 1234 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer
Destructor called
Destructor called
Destructor called
Destructor called
$>
```

<br>

# **Chapter 5**

## Exercise 02: Now we’re talking

<br>

| **CPP Module**                     | Exercise 02                                   |
| ---------------------------------- | --------------------------------------------- |
| Exercise 02 : 이제 대화를 나눕시다 |
| **제출할 폴더**                    | ex02/                                         |
| **제출할 파일**                    | `Makefile, main.cpp, Fixed.hpp and Fixed.cpp` |
| **허용되는 함수**                  | `roundf (from <cmath>)`                       |

<br>

##### _We’re getting closer. Add the following public member operator overloads to your class:_

거의 다 와 갑니다! 다음과 같은 Public 멤버 연산자 오버로딩을 클래스에 추가하세요:

- ##### _Six comparison operators: `>, <, >=, <=, ==` and `!=`._

  여섯 개의 비교 연산자: `>, <, >=, <=, ==` 그리고 `!=`.

- ##### _Four arithmetic operators: `+, -, *,` and `/`._

  네 개의 산술 연산자: `+, -, *,` 그리고 `/`.

- ##### _The pre-increment, post-increment, pre-decrement and post-decrement operators, that will increment or decrement the fixed point value from the smallest representable ε such as 1 + ε > 1._

  고정 소수점 값을 1 + ε > 1와 같은 가장 작은 표현법 ε로부터 증가 또는 감소시키는 전위 증가 연산자, 후위 증가 연산자, 전위 감소 연산자, 후위 감소 연산자.

##### _Add the following public static member functions overloads to your class:_

다음과 같은 Public 정적 멤버 함수 오버로딩을 클래스에 추가하세요:

- ##### _The static member function `min` that takes references on two fixed point values and returns a reference to the smallest value, and an overload that takes references on two constant fixed point values and returns a reference to the smallest constant value._

  두 개의 고정 소수점 값 참조를 받아 가장 작은 값의 참조를 반환하는 정적 멤버 함수 `min`과, 두 개의 고정 소수점 상수 값의 참조를 받아 가장 작은 상수 값의 참조를 반환하는 오버로딩

- ##### _The static member function `max` that takes references on two fixed point values and returns a reference to the biggest value, and an overload that takes references on two constant fixed point values and returns a reference to the biggest constant value._

  두 개의 고정 소수점 값 참조를 받아 가장 큰 값의 참조를 반환하는 정적 멤버 함수 `max`와, 두 개의 고정 소수점 상수 값의 참조를 받아 가장 큰 상수 값의 참조를 반환하는 오버로딩

##### _It’s up to you to test every feature of your class, but the short code:_

여러분의 클래스의 기능들을 테스트하는 것은 여러분에게 달려있지만, 다음과 같은 짧은 코드

```cpp
#include <iostream>

int main( void ) {
  Fixed a;
  Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;

  std::cout << b << std::endl;

  std::cout << Fixed::max( a, b ) << std::endl;

  return 0;
}
```

##### _Should output something like (I deleted the ctors/dtor logs):_

는 다음과 같은 결과값을 출력하여야 합니다 (ctors/dtor 로그는 지웠습니다):

```sh
$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
$>
```

<br>

# **Chapter 6**

## Exercise 03: BSP

<br>

| **CPP Module**    | Exercise 03                                                                   |
| ----------------- | ----------------------------------------------------------------------------- |
| Exercise 03 : BSP |
| **제출할 폴더**   | ex03/                                                                         |
| **제출할 파일**   | `Makefile, main.cpp, Fixed.hpp, Fixed.cpp, Point.hpp, Point.cpp, and bsp.cpp` |
| **허용되는 함수** | `roundf (from <cmath>)`                                                       |

<br>

> ⚠️ <br>
>
> ##### _This exercise is not required to validate this module._<br>
>
> 이 과제는 이번 모듈을 끝내는 데에 필수적이지 않습니다

##### _Now that you have a fully working fixed point class, it could be cool to use it for something useful. You are going to write a function which indicates whether a point is inside of a triangle or not. Very useful, isn’t it?_

이제 여러분은 완전히 동작하는 고정 소수점 클래스를 완성했습니다. 이제 유용한 곳에 적절히 사용하면 더 멋지겠죠? 여러분은 지금부터 특정 좌표가 삼각형 안에 들어있는지 아닌지 판단하는 함수를 구현해 볼 것입니다. 정말 쓸모있네요, 그쵸?

> 💡 <br>
>
> ##### _BSP stands for Binary space partitioning. You are welcome :)_<br>
>
> BSP는 Binary Space Partitioning (이진 공간 분할법) 입니다. 천만에요 :)

##### _Let’s start by writing the orthodox class `Point` to represent a 2D point:_

2D 좌표를 표현하는 정통적인 클래스 `Point`를 작성하는 것부터 시작해 봅시다:

- ##### _Private members:_

  Private 멤버:

  - ##### _A `Fixed const x`_

    `Fixed const x`

  - ##### _A `Fixed const y`_

    `Fixed const y`

  - ##### _Anything else you judge useful._

    여러분이 생각하기에 유용한 것들.

- ##### _Public members:_

  Public 멤버:

  - ##### _A default constructor that initializes `x` and `y` to 0._

    `x`와 `y`를 0으로 초기화하는 기본 생성자.

  - ##### _A destructor._

    소멸자.

  - ##### _A copy constructor._

    생성자 복사본.

  - ##### _A constructor that takes two constant floating points as parameters and that initializes `x` and `y` with those values._

    두 부동 소수점 상수 값을 매개변수로 받아 `x`와 `y`를 초기화하는 생성자.

  - ##### _An assignation operator overload._

    할당 연산자 오버로딩.

  - ##### _Anything else you judge useful._

    여러분이 생각하기에 유용한 것들.

##### _Now, you should write the function `bsp`:_

지금부터 함수 bsp를 작성하셔야 합니다:

- ##### _The first three parameters are the vertices of our beloved triangle._

  처음 세 개의 매개변수는 우리의 사랑스러운 삼각형의 정점입니다.

- ##### _The fourth is the point we are evaluating._

  네 번째 매개변수는 우리가 판단에 사용할 좌표입니다.

- ##### _The return value is `True` if the point is inside the triangle, otherwise, the return value should be `False`. This means that if the point is a vertex or a point that is on the edge, the return value should be `False`._

  만약 좌표가 삼각형 안에 포함되어 있을 경우 `True`를 반환하며, 그 외에는 `False`를 반환합니다. 이 말인즉슨 좌표가 꼭지점이거나 모서리에 있을 경우도 `False`를 반환해야 한다는 의미입니다.

- ##### _Therefore, the prototype of the function is:_

  결국, 함수의 프로토타입은 다음과 같아야 합니다:

```cpp
bool bsp( Point const a, Point const b, Point const c, Point const point);
```

##### _Don’t forget to submit your main with some tests to prove that your class works as intended._

여러분의 클래스가 의도대로 동작하는 것을 보여주기 위해 main문을 함께 제출하는 것을 잊지 마세요.