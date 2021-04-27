#include<iostream>
using namespace std;

int main() {
	
	int a;
	int b;
	cin >> a;

	for (int i = 1; i <= a; i++)
	{

		if (a % 2 == 0)  //짝수인 경우
		{
			for (b = 1; b <= a / 2; b++) //짝수일 경우에는 첫 줄에 입력값을 2로 나눈 만큼의 별 출력
			{
				cout << " * ";
			}
			cout << endl;

		}

		else //홀수인 경우
		{
			for (b = 1; b <= a/2 + 1; b++)//홀수인 경우에는 +1 해주어야 함
			{
				cout << " * ";
			}
			cout << endl;
		}
		cout << " "; //한칸 띄어주기 위해서

    for (b = 1; b <= a / 2; b++)//두번째 줄은 홀짝 동일함
    {
	    cout << " * ";
    }
    cout << endl;
	}

	return 0;
}
