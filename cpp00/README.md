# **C++ - Module 00**

##### Namespace, class, member functions, stdio stream, initialization lists, static, const, and lots of basic stuff

이름공간, 클래스, 멤버함수, 표준 입출력 스트림, 초기화 리스트, 정적변수, 상수 그리고 많은 기초 사항들

##### _Summary: This document contains the subject for Module 00 of the C++ modules._

_요약: 이 문서는 C++ 모듈의 00번째 모듈 서브젝트를 담고 있습니다._

<br>

# **Chapter 1**

## General rules

<br>

- ##### _Any function implemented in a header (except in the case of templates), and any unprotected header, means 0 to the exercise._

  (템플릿의 경우를 제외한) 헤더에 함수가 구현되거나, 헤더가 보호되지 않으면 과제는 0점 처리됩니다.

- ##### _Every output goes to the standard output, and will be ended by a newline, unless specified otherwise._

  모든 출력은 표준 출력으로 전달되어야 하며, 서브젝트에 명시되지 않은 이상 개행으로 끝나야 합니다.

- ##### _The imposed filenames must be followed to the letter, as well as class names, function names and method names._

  서브젝트에서 부여한 파일명 뒤에는 문자가 와야 합니다. 클래스명, 함수명, 메소드명도 마찬가지에요.

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

# **Contents**

| Chapter | Contents                                              | page |
| :-----: | :---------------------------------------------------- | :--: |
|    1    | [**General Rules**](#Chapter-1)                       |  1   |
|    2    | [**Exercise 00: Megaphone**](#Chapter-2)              |  4   |
|    3    | [**Exercise 01: My Awesome Phonebook**](#Chapter-3)   |  5   |
|    4    | [**Exercise 02: The Job of Your Dreams**](#Chapter-4) |  7   |

<br>

# **Chapter 2**

## Exercise 00: Megaphone

<br>

| **CPP Module**       | Exercise 00               |
| -------------------- | ------------------------- |
| Exercise 00 : 확성기 |
| **제출할 폴더**      | ex00/                     |
| **제출할 파일**      | `Makefile, megaphone.cpp` |
| **금지된 함수**      | `None`                    |

<br>

##### _Just to be sure that everybody is awake, write a program that has the following behavior:_

모두가 잠에서 깨어날 수 있도록, 다음과 같이 동작하는 프로그램을 작성하세요:

##### _(Use C++ style to interact with stdin!)_

(표준 입력에 접근하기 위해 C++ 스타일을 사용하세요!)

```shell
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>
```

<br>

# **Chapter 3**

## Exercise 01: My Awesome Phonebook

<br>

| **CPP Module**                      | Exercise 01                   |
| ----------------------------------- | ----------------------------- |
| Exercise 01 : 내 짱 멋진 전화번호부 |
| **제출할 폴더**                     | ex01/                         |
| **제출할 파일**                     | `Makefile, *.cpp, *.{h, hpp}` |
| **금지된 함수**                     | `None`                        |

<br>

##### _Welcome to the 80s and its unbelievable technology! Write a program that behaves like a `crappy` awesome phonebook software. Please take some time to give your executable a relevant name. When the program starts, the user is prompted for input: you should accept the `ADD` command, the `SEARCH` command or the `EXIT` command. Any other input is discarded._

믿을 수 없는 최첨단 기술력의 80년대에 오신 것을 환영합니다! `형편없이` 멋진 전화번호부처럼 동작하는 프로그램을 제작하세요. 실행 파일이 과제와 관련된 이름을 가질 수 있도록 잘 고민해 보세요. 프로그램을 실행하면, 사용자는 다음과 같은 커맨드를 입력할 수 있어야 합니다: `ADD`, `SEARCH`, `EXIT` 커맨드를 허용하세요. 그 외의 입력값은 버려집니다.

##### _The program starts empty (no contacts), doesn’t use any dynamic allocation, and can’t store more than 8 contacts. If a ninth contact is added, replace the oldest contact._

프로그램은 빈 채로 시작됩니다 (저장된 연락처가 하나도 없다는 뜻이죠). 동적 할당은 하나도 쓰이지 않아야 하고, 8개의 연락처 이상은 저장할 수 없습니다. 9번째 연락처가 추가되면, 오래된 연락처부터 삭제됩니다.

> 💡 <br>
>
> ##### _http://www.cplusplus.com/reference/string/string/ and of course http://www.cplusplus.com/reference/iomanip/_<br>
>
> http://www.cplusplus.com/reference/string/string/ 과
> http://www.cplusplus.com/reference/iomanip/ 을 참고해보세요.

<br>

- ##### _If the command is `EXIT`:_

  입력된 커맨드가 `EXIT`일 경우:

  - ##### _The program quits and the contacts are lost forever._
    프로그램은 종료되고, 저장했던 연락처는 영원히 사라집니다...

- ##### _Else if the command is `ADD`:_

  입력된 커맨드가 `ADD`일 경우:

  - ##### _The program will prompt the user to input a new contact’s information, one field at a time, until every field is accounted for._

    프로그램은 한 번에 한 필드씩, 모든 필드가 채워질 때까지 사용자에게 새 연락처의 정보를 적을 수 있도록 안내하여야 합니다.

  - ##### _A contact is defined by the following fields: `first name`, `last name`, `nickname`, `phone number`, `darkest secret`._

    연락처는 다음과 같은 필드를 포함하여 정의되어야 합니다: `성, 이름, 별명, 핸드폰 번호, 누구한테도 들켜서는 안될 비밀`

  - ##### _The PhoneBook must be represented as as an instance of a class in your code it must contain an array of contact._

    전화번호부 (PhoneBook) 는 코드 내에서 클래스의 인스턴스로 정의되어야 하며, 연락처 배열을 포함하여야 합니다.

  - ##### _A contact MUST be represented as an instance of a class in your code. You’re free to design the class as you like, but the peer evaluation will check the consistency of your choices. Go look at today’s videos again if you don’t understand what I mean (and I don’t mean "use everything" before you ask)._
    연락처는 **반드시** 코드 내부에서 클래스의 인스턴스로 정의되어야 합니다. 클래스를 어떤 방식으로 구성할 지는 여러분의 자유지만, 동료평가 시에 여러분의 클래스 구성이 일관성을 띄는지 검사할 것입니다. 무슨 말인지 모르시겠다면, 오늘의 영상을 다시 보고 오세요. (그리고 이건 "아무거나 다 써도 된다" 라는 뜻이 아닙니다.)

- ##### _Else if the command is `SEARCH`:_

  입력된 커맨드가 `SEARCH`일 경우:

  - ##### _The program will display a list of the available non-empty contacts in 4 columns: `index`, `first name`, `last name` and `nickname`._

    프로그램은 존재하는 (비어있지 않은) 모든 연락처 리스트를 다음과 같은 4개의 열로 나누어 보여주어야 합니다 : `인덱스`, `성`, `이름`, `별명`

  - ##### _Each column must be 10 chars wide, right aligned and separated by a ’|’ character. Any output longer than the columns’ width is truncated and the last displayable character is replaced by a dot (’.’)._

    각 열은 너비 10 문자로, 가로 정렬되어 있어야 하며 '|' 문자로 구분되어야 합니다. 열의 너비보다 긴 출력 문자열은 잘리고 마지막 표시 가능 문자는 점 ('.') 으로 치환됩니다.

  - ##### _Then the program will prompt again for the index of the desired entry and displays the contact’s information, one field per line. If the input makes no sense, define a relevant behavior._
    그리고 프로그램은 원하는 연락처 항목의 인덱스를 입력받아, 연락처를 한 필드당 한 줄씩 출력하여야 합니다. 의미없는 입력값에 대해선 적절한 동작을 정의하세요.

- ##### _Else the input is discarded._
  그 외의 입력값은 버려집니다.

##### _When a command has been correctly executed, the program waits for another ADD or SEARCH command until an EXIT command._

커맨드가 제대로 실행된 후에, 프로그램은 다른 커맨드를 입력받을 때까지 대기하여야 합니다.

<br>

# **Chapter 4**

## Exercise 02: The Job Of Your Dreams

<br>

| **CPP Module**                      | Exercise 02                                     |
| ----------------------------------- | ----------------------------------------------- |
| Exercise 02 : 네가 원하는 꿈의 직장 |
| **제출할 폴더**                     | ex02/                                           |
| **제출할 파일**                     | `Makefile, Account.cpp, Account.hpp, tests.cpp` |
| **금지된 함수**                     | `None`                                          |

<br>

##### _It’s your first day of work at `GlobalBanksters United`. You successfully passed the hiring tests for the programmers’ team thanks to a few tricks with `Microsoft Office` a friend showed you. But you know that it was your swift installation of `Adobe Reader` that blew your recruiter’s mind. This gave you the little edge needed to beat your opponents for this job._

오늘은 여러분의 `GlobalBanksters United` 출근 첫 날입니다. 여러분의 친구가 알려준 몇 개의 `Microsoft Office` 기술 덕분에, 여러분은 프로그래머 팀 채용 시험에 무사히 통과했죠. 하지만 곧 여러분은 여러분의 신속한 `Adobe Reader` 설치가 채용 담당자들의 마음을 사로잡았다는 것을 알게 됩니다. 이것이 당신의 입사 라이벌들을 제치는 데에 조금 도움이 되었네요.

##### _Anyway, you made it and your boss gave you your first task. You need to recode one missing source file because something went wrong. `Account.cpp` is missing and they use USB file sharing and not git._

아무튼간에, 여러분은 성공적으로 입사했고, 사장님이 여러분에게 첫 업무를 내립니다. 회사에서 사용되는 소스 파일 중 하나가 실수로 날아가 버려서, 여러분이 다시 작성해야 해요. `Account.cpp`는 운명을 달리했고, 회사는 git 대신 USB로 파일을 주고받기 때문에 복구할 방법이 없습니다.

##### _At this point, it will be legitimate to quit this place however for the sake of this exercise, you will stay._

이쯤해서 퇴사 욕구가 마구 샘솟지만, 이 연습 문제의 존폐 여부 때문에 여러분은 그냥 남기로 합니다.

##### _The `Account.hpp` file is present and a quick compilation of `tests.cpp` confirms that an `Account.cpp` file is missing. There’s also an old output log that seems to contain the matching output._

`Account.hpp`가 제공되며, `tests.cpp`를 컴파일 및 실행시켜 `Account.cpp` 파일의 누락을 체크할 수 있습니다. 또한, 적절한 출력값을 간직한 옛날 출력 로그가 남아있습니다.

##### _So you need to create a `Account.cpp` file and quickly write some lines of pure awesome `C++` and after a couple of failed compilations, your program will compiles and passes the tests with a perfect output, except for the timestamps differences. Damn you’re good!_

자, 이제 `Account.cpp`를 생성하시고, 순수하고 아름다운 `C++` 코드를 빠르게 작성해 보세요. 몇 번의 컴파일 실패 끝에, 여러분은 타임스탬프의 차이를 제외한 모든 출력값이 완벽하게 테스터를 통과하는 프로그램을 완성하실 수 있을 거에요. 와, 당신 너무 멋있어!