#include <iostream>
using namespace std;

int main()
{
	int answer; //좌석 예약 실행 유무 대한 대답의 변수
	int i = 0;
	int k = 0; 
	int x, y; //선택할 자리에 대한 변수
	int seat[3][10] = { 0 }; // 3행 10열자리 좌석 

	while (1) 
	{
		cout << "좌석을 예약하시겠습니까?(1또는 0):" << endl;
		cin >> answer;


		if (answer == 1) // 예약 실행 유무 1 = 예약 실행
		{
			cout << "현재의 좌석은 다음과 같습니다." << endl;
			cout << "--------------------------------" << endl;
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "--------------------------------" << endl;

			for (i = 0; i < 3; i++) //for문 사용해서 배열을 통해 좌석 보여주기
			{
				for (k = 0; k < 10; k++)
				{
					cout << seat[i][k] << " ";
				}
				cout << endl;
			}
			cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까?";
			cin >> x;
			cin >> y;
			cout << endl;
		

			if (seat[x - 1][y - 1] == 0) // 0부터 인덱스가 시작하므로 1 빼줌
			{
				cout << "예약되었습니다." << endl;
				seat[x - 1][y - 1] = 1;
				cout << "--------------------------------" << endl;
				cout << "1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "--------------------------------" << endl;
				for (i = 0; i < 3; i++)
				{
					for (k = 0; k < 10; k++)
					{
						cout << seat[i][k] << " ";
					}
					cout << endl;
				}
			}
			// 예약된 자리 선택했을 경우
			else { 
				cout << "이미 예약된 자리입니다." << endl;
			}
		}

		else if (answer == 0) // 0은 예약 실행 종료이므로 break문 써줌
		{
			cout << "좌석 예약 종료" << endl;
			break;
		}
		
		else // 다른 번호 입력시 다시 입력받기
		{
			cout << "1번 또는 0번만 입력하세요." << endl;

		}
	}

	return 0;
}
			

	