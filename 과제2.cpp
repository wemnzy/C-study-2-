#include<iostream>
using namespace std;

int main() {
	
	int a;
	int b;
	cin >> a;

	for (int i = 1; i <= a; i++)
	{

		if (a % 2 == 0)  //¦���� ���
		{
			for (b = 1; b <= a / 2; b++) //¦���� ��쿡�� ù �ٿ� �Է°��� 2�� ���� ��ŭ�� �� ���
			{
				cout << " * ";
			}
			cout << endl;

		}

		else //Ȧ���� ���
		{
			for (b = 1; b <= a/2 + 1; b++)//Ȧ���� ��쿡�� +1 ���־�� ��
			{
				cout << " * ";
			}
			cout << endl;
		}
		cout << " "; //��ĭ ����ֱ� ���ؼ�

    for (b = 1; b <= a / 2; b++)//�ι�° ���� Ȧ¦ ������
    {
	    cout << " * ";
    }
    cout << endl;
	}

	return 0;
}
