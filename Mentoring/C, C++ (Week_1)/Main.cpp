#include <iostream>

using namespace std;

int print(int);
int print(int, int);

int main()
{
	cout << "Hello World!";

	int a(10);

	int arr[3] = { 1, 2, 3 };
	for (int& n : arr) //이터레이터, 레퍼런스 사용
	{
		printf("%d ", n);
	}
}

/*
(19) C++
변수의 초기화를 괄호를 통해 가능
using namespace std와 같이 네임스페이스를 사용 가능
레퍼런스의 등장. 이름만 같고 주소값이 완전히 같은 두 변수임
함수 오버로드 : C에도 있었지만, 하여튼.
같은 변수 이름을 가졌지만, 다른 매개변수 목록을 가져서 다른 함수가 됨
for문의 이터레이터 사용가능 : C++에서는 변수의 선언이 느슨해져서
For문 내 변수선언이 상당히 보편화됨
또한, 이터레이터의 사용이 가능해지면서 변수에 직접 접근하면서
반복문을 사용할 수 있게 됨
*/