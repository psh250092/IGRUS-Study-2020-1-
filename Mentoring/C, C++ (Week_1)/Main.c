#include <stdio.h>
#include <string.h>

void sort(int *a, int size);

int main()
{
	// Section 1
	printf("Hello World!\n\n");

	printf("동해물과 백두산이\n마르고\n닯도록\n\n");
	/*
	(1) 이스케이프 시퀸스
	이스케이프 시퀸스 = \n 등, 문자열 내에 표시할 수 없는 특수기호들

	ex) \a : 알람음
		\\ : \를 표시하는 방법
		\t : 탭
		\n : 개행
	*/
	printf("%d + %d = %d\n", 2, 3, 5);
	printf("%f, %.2f\n", 3.1415926535, 3.1415926535);
	printf("%g, %.3g\n", 31415926.535, 31415926.535);
	printf("%c %c %c\n%s\n\n", 'a', 'b', 'c', "Hello World!");
	/*
	(2) 서식문자
	%d = 정수 출력
	%f = 실수 출력
	%c = 문자 출력 (아스키코드만 표현 가능)
	%s = 문자열 출력
	%g = 지수형태로 출력

	%.2f = 소숫점 밑 2자리만 표시

	문자 1개는 '', 문자열은 ""
	*/

	int a; //선언
	a = 3; //대입 (처음 대입의 경우, 초기화라 통칭)
	printf("a = %d\n", a);

	/*
	(3) 변수

	선언 : 변수를 만듦
	대입 : 변수에 값을 집어넣음
	초기화 : 변수에 처음으로 값을 넣음

	변수이름으로 가능
	알파벳 대소문자, 숫자(첫글자만 X), _, (사실 한글도 가능)
	변수이름으로 불가
	키워드
	*/

	int b = 5;
	unsigned int c = 4;
	float d = 1.2;
	float e = 1.3;

	/*
	(4) 자료형
	char : 문자형, 1바이트
	short : 정수형, 2바이트
	int : 정수형, 시스템이 결정. 보통은 4바이트
	long : 정수형, 4바이트
	long long : 정수형, 8바이트

	float : 실수형, 4바이트
	double : 실수형, 8바이트

	unsigned, signed
	자료형의 맨 앞의 부호를 결정하는 비트를 수를 나타내는 데 씀
	unsigned는 범위가 두 배가 되는 대신 양수만 나타낼 수 있음

	void : 리턴값이 없는 함수의 자료형.포인터의 경우, 아직 정해지지 않은 경우를 나타냄
	bool : True/False (사실상 char)

	(5)
	부동소수점은 실수부와 가수부로 나뉨
	ex) 12345 = 1* 10^1 * 2 * 10^2 3 * 10^3 * 4 * 10^4 * 5 * 10^5

	이를 이진법단위로 적용
	*/

	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;
	int namuji = a % b;

	printf("%d, %d, %d, %d\n\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));

	/*
	(6) 연산자
	+ : 덧셈
	- : 뺄셈
	* : 곱샘

	그러나, 정수형과 실수형에 따라 나눗셈이 하는 일이 달라짐

	정수형
	/ : 나눗셈의 몫을 구함
	% : 나눗셈의 나머지를 구함
	ex) 5 / 2 = 2

	실수형
	/ : 나눗셈의 결과를 구함
	ex) 5.0 / 2.0 = 2.5
	*/

	int f = 3.14;
	double g = 10;

	int avg = (90 + 93) / 2;
	printf("%f %f\n", avg, (double)(90 + 93) / 2);

	/*
	(7) sizeof, 형변환
	sizeof : 자료형의 크기를 알려줌
	형변환 : 하나의 자료형을 다른 자료형으로 바꾸어줌

	정수 => 실수 가능
	실수 => 정수 불가능

	작은 정수 => 큰 정수 가능
	큰 정수 => 작은 정수 불가능

	정수 / 정수 = 정수
	실수 / 정수 = 실수
	실수 / 실수 = 실수
	정수 / 실수 = Mistake
	*/

	int h;
	printf("아스키 : ");
	scanf("%d", &h);
	printf("Input Num = %d\n", h);
	/*
	(8) 입력함수
	scanf : 입력함수, 들어온 입력을 서식문자의 형식으로 &의 주소에 저장됨
	보통은 스페이스를 통해 연속된 입력을 구분
	*/

	char i;
	printf("아스키 : ");
	scanf("%c", &i);
	printf("당신이 입력한 문자는 %c입니다.\n", i);
	printf("%c의 아스키 값 : %d\n", i, i);
	/*
	(9) 문자
	반각 : 영어 대소문자, 특수기호
	전각 : 한글, 일본어, 한자 등등

	char형은 정수를 저장 가능함
	그 이유는 문자 표현 방식이 ASCII코드이기 때문

	ex) 65 = 'a'
	*/


	// 종합문제

	// Q1
	printf("\n\nQ1\n\n");

	double j, k;
	printf("두 수 입력 : ");
	scanf("%f %f", &j, &k);
	printf("%f + %f = %f\n", j, k, j + k);

	// Q2
	printf("\nQ2\n\n");


	printf("체중, 키 입력 : ");
	scanf("%f %f", &j, &k);
	printf("BMI : %f\n", j / (k * k));

	// Q3
	printf("\nQ3\n\n");

	char l;
	printf("문자 입력 : ");
	scanf("%c", &l);
	printf("다음 알파벳 : %c", l + 1);



	// Section 2

	int m = 5;
	m = m + 1;
	printf("%d ", m);
	m += 1;
	printf("%d ", m);
	printf("%d %d %d", ++m, m++, m);

	/*
	(10) 연산자 심화
	대입연산자 =
	같은 변수 가능
	앞에 산술연산자를 붙여서 산술대입연산자 가능

	++과 --는 그 위치(전치, 후치)에 따라 연산순서가 달라짐
	(중요함 무지 중요함 엄청엄청 중요함 무지막지하게 중요함)
	*/

	printf("%d %d %d %d %d %d", 1 && 0, 1 || 0, 1 == 0, 1 != 0, 1 >= 0, 1 <= 0);

	/*
	(11) 논리 연산자

	bool은 진리값을 저장할 때 쓰임
	
	*강의에 오류가 있음. c++에서 bool을 지원하기에
	cpp파일을 사용한 강의에서는 사용가능하지만
	원래의 c에서는 bool이 지원되지 않음

	&& : 양쪽이 모두 참이 때 true 반환
	|| : 한 쪽이라도 참일 때 true 반환
	! : true는 false, false는 true로 만듬

	== : 양쪽이 같을 때 true 반환
	!= : 양쪽이 다를 때 true 반환
	>, >= : 전자가 후자의 초과 또는 이상일 때 true 반환
	<, <= : 전자가 후자의 미만 또는 이하일 때 true 반환

	비교연산자가 논리연산자보다 연산순위가 높음
	*/
	int o;
	printf("숫자입력 : ");
	scanf("%d", &o);
	if (o % 2 == 0)
	{
		printf("이 숫자는 짝수입니다.\n");
	}
	else
	{
		printf("이 숫자는 홀수입니다.\n");
	}

	/*
	(12) 조건문 if
	if(조건문)을 이용해 분기
	else와 elseif를 통해서 분기된 케이스를 처리

	if
	else if
	else

	조건문이 참이면 그 밑의 statement를 실행

	세미콜론이 하나인 경우에는 중괄호를 없앨 수 있음
	*/

	int p;

makeChoice:

	printf("\n고르기 : ");
	scanf("%d", &p);

	switch (p)
	{
	case 1:
		printf("새 게임\n");
		break;
	case 2:
		printf("불러오기\n");
		break;
	case 3:
		printf("설정\n");
		break;
	case 4:
		printf("나가기\n");
		break;
	default:
		printf("잘못된 버튼\n");
		break;
		goto makeChoice;
	}

	/*
	(13) 조건문 switch
	switch(변수)를 이용해 분기
	case 상수를 통해 분기를 처리

	if
	case 1
	default

	변수가 case뒤에 온 상수와 같으면 그 case문 실행
	break를 안쓰면 밑의 문장 모두를 실행함

	goto를 반복문처럼 사용할 수 있으나, 사용하지 않는 편이 좋음
	*/
	int q = 1;
	while (i <= 10)
	{
		printf("%d\n", q);
		i++;
	}

	/*
	(14) 반복문 while
	while(조건문)
	조건문의 true면 밑의 statement를 반복
	조건문이 false면 탈출

	 do{}while()을 이용해서 한번은 무조건 실행할 수 있도록 할 수 있음

	 무한루프 : 조건식이 항상 true인 경우 (무한히 루프를 돌게 됨)
	 break : 반복문을 탈출함
	 continue : 조건문으로 바로 돌아감
	*/
	int r;
	for (r = 0; i <= 10; i++)
	{
		printf("%d\n", i);
	}

	/*
	(13) 반복문 for
	for(초기식; 조건식; 증감식)
	조건식을 만족할때까지 증감식과 statement를 반복함

	일정하게 증가/감소하는 변수가 필요할 때
	배열의 모든 원소에 접근할 때
	특정 횟수만큼 작업을 반복하고 싶을 때
	*/

	// 종합문제

	// Q1
	int s;
	printf("시험점수 입력 : ");
	scanf("%d", &s);
	if (s >= 90)
	{
		printf("점수 : A\n");
	}
	else if (s >= 80)
	{
		printf("점수 : B\n");
	}
	else if (s >= 70)
	{
		printf("점수 : C\n");
	}
	else if (s >= 600)
	{
		printf("점수 : D\n");
	}
	else if (s >= 15)
	{
		printf("점수 : E\n");
	}
	else
	{
		printf("점수 : F\n");
	}

	//Q2
	int t, u;
	printf("수 입력 : ");
	scanf("%d", &t);
	for (u = 1; u <= t; u++)
	{
		if (t % u == 0)
		{
			printf("%d ", u);
		}
	}
	printf("끝\n");

	//Q3
	int v, w;
	printf("수 입력 : ");
	scanf("%d", &v);
	for (w = 1; w <= t; w++)
	{
		if (w % 10 % 3 == 0)
		{
			printf("* ");
		}
		else
		{
			printf("%d ", w);
		}
	}
	printf("끝\n");

	//Q4
	int x, y, z;
	printf("수 입력 : ");
	scanf("%d", &x);
	for (y = 1; y <= x; y++)
	{
		for (z = 1; z <= x; x++)
		{
			printf("%d", z * 2 - 1);
		}
		printf("\n");
	}
	printf("끝\n");

	//Q5
	int A, B, C;
	printf("수 입력 : ");
	scanf("%d", &A);
	for (B = 1; B <= A; B++)
	{
		for (C = 1; C <= B * 2 - 1; x++)
		{
			printf("%d", C);
		}
		printf("\n");
	}
	printf("끝\n");



	// Section 3

	int D[5];
	int E;
	int MAX;
	for (E = 0; E < sizeof(D)/sizeof(int); E++)
	{
		D[E] = E;
	}
	printf("D의 2번째 변수는 %d\n", D[1]);
	
	MAX = D[0];
	for (E = 0; E < sizeof(D) / sizeof(int); E++)
	{
		if (D[i] > MAX)
		{
			MAX = D[i];
		}
	}
	printf("최댓값은 %d\n", MAX);
	
	int F[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int G;
	for (E = 0; E < 2; E++)
	{
		for (G = 0; G < 3; G++)
		{
			printf("%d ", F[E][G]);
		}
		printf("\n");
	}

	/*
	(14) 배열

	많은 변수들을 한번에 효율적으로 관리하기위해
	배열이름[크기]의 형식으로 생성
	
	배열 : 연속되는 공간에 선언된 변수 집합
	
	배열이름[첨자]의 방식으로 접근 가능
	반복문과 응용하면 배열의 전체 원소에 접근 가능
	조건문을 이용하면 배열의 특정 원소 제어 가능

	2차원 배열 : 배열안에 배열을 담은 형태
	이중for문 : 안을 먼저 돌고 밖을 돔
	*/

	char H[] = "Hello World!";
	char I[14];
	printf("%s, %d\n", H, H[12]);
	strcpy(I, H);
	printf("%d, %s\n", I, strlen(H));

	/*
	(15) 문자열

	문자들을 나열한 것
	char형 배열 맨 쥐에 널문자가 붙어서 만들어짐
	널문자가 문자열의 맨 뒤에 붙어 문자열의 끝을 나타냄

	strlen : 문자열의 길이를 반환함
	strcpy : 문자열을 복사해줌
	strcat : 문자열의 뒤에 문자열을 붙임
	strcmp : 문자열을 비교
	*/

	int J = 0;
	int *ptr_J = &j;
	*ptr_J = 10;
	printf("%d ", J);
	int** ptr_ptr_J = &ptr_J;
	**ptr_ptr_J = 20;
	printf("%d\n", J);
	
	/*
	(16) 포인터

	포인터 : 변수의 주소를 담는 변수
	*포인터 형식으로 선언
	*으로 간접참조, &으로 주소값 반환
	**포인터 형식으로 이중포인터 가능

	*/

	int K[3] = { 1, 2, 3 };
	int* ptr_K = &K[1];
	ptr_K += 1;

	printf("포인터 뒤 4바이트 : %d", *ptr_K);

	int L[2][3];
	int M;
	int *ptr_L[2];
	for (M = 0; M < 2; M++)
	{
		ptr_L[M] = L[M];
	}

	/*
	(17) 배열과 포인터의 관계
	사실 배열의 이름은 배열의 첫번쨰 주소를 가리키는 포인터
	배열은 메모리상에서 연속되어 배치되어있음
	첨자에 따라 포인터로부터 이동해서 접근

	ptr[i]와 i[ptr] 둘 다 가능

	(*ptr)[] 형식으로 배열포인터르 선언 가능
	배열포인터는 2차원배열을 담을 수 있음
	=> 배열의 이름은 포인터이기 때문

	포인터 배열 : 포인터를 배열함
	*/
}


void sort(int *a, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i; i < size - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int  temp = a[j + 1];
				a[j] = a[j + 1];
				a[j] = temp;
			}
		}
	}
}

/*
(18) 함수
함수는 매개변수와 반환형으로 나뉨
프로토타입을 미리 선언해두고, 마지막에 정의할 수 있음
return 키워드를 이용하여 값을 반환
void형은 값을 반환하지 않음 : 서브루틴
함수가 자기 자신을 호출할 수 있음 : 재귀함수
재귀함수는 기저상태와 점화식으로 구성
함수에서 배열을 받기 위해서는 포인터 형식을 사용
그저 값을 받는 것은 지역변수 사용
Get by value, Get by reference
배열을 반환하려면 함수를 포인터형으로 반환
ex) char *strfnd(char * str);
*/