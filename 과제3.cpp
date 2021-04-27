#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int* ptr;//포인터 선언(변수 앞에*붙여줌)
	ptr = &a; //포인터 초기화(변수 앞에 &붙여줌)

	cout << "변수 a의 주소는 : " << ptr << endl;
	cout << "a의 값은 : " << *ptr << endl;

	return 0;

}