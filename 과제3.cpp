#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int* ptr;//������ ����(���� �տ�*�ٿ���)
	ptr = &a; //������ �ʱ�ȭ(���� �տ� &�ٿ���)

	cout << "���� a�� �ּҴ� : " << ptr << endl;
	cout << "a�� ���� : " << *ptr << endl;

	return 0;

}