#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	// 1. 컴퓨터가 랜덤으로 1~9까지 중복되지 않는 숫자 3개를 기억하고싶다.
	int quiz[3]{ 0 };

	srand((unsigned int)time(0));
	int index = 0;
	// quiz배열에 하나씩 추가하고 다 넣으면 그만하고싶다.
	while (index < 3)
	{
		// 랜덤으로 1~9까지 숫자 하나를 정하고싶다.
		int r = (rand() % 9) + 1;

		// r값이 현재 인덱스를 기준으로 quiz배열에 같은값이 들어있는지 검사
		// 만약 들어있으면 r을 다시 결정해야한다.
		bool isSuccess = true;
		for (int i = 0; i < index; i++)
		{
			if (quiz[i] == r)
			{
				isSuccess = false;
				break;
			}
		}
		if (true == isSuccess)
		{
			quiz[index++] = r;
		}
	}

	//cout << quiz[0] << quiz[1] << quiz[2] << endl;

	int answers[3]{ 0 };

	while (true)
	{
		//int number = 19990120;
		//int 년 = number / 10000;
		//int 월 = (number / 100) % 100;
		//int 일 = number % 100;
		//cout << 년 << " " << 월 << " " << 일 << endl;
		// 사용자의 입력 숫자3개
		int answer;
		cin >> answer; //123
		answers[0] = (answer / 100) % 10;
		answers[1] = (answer / 10) % 10;
		answers[2] = answer % 10;
		//cout << answer << endl;

		int strike = 0;
		int ball = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				// 대답의 항목이 quiz 배열에 포함되어 있는가?
				if (answers[i] == quiz[j])
				{
					// 자릿수가 같으면 스트라잌 다르면 볼
					if (i == j)
						strike++;
					else
						ball++;
				}
			}
		}
		// strike과 ball을 더해서 0이라면 아웃이다.
		if (strike + ball == 0)
		{
			// 아웃
			cout << " 아웃" << endl;
		}
		else if (strike == 3)
		{
			cout << strike << "strike 성공" << endl;
			break;
		}
		else {
			cout << strike << "strike, " << ball << "ball" << endl;
		}

		// 2. 사용자의 입력 숫자3개
		// 3. 입력받은 숫자가 기억하고 있는 숫자를 비교해서 결과를 출력
		//   3.1 성공 : 입,기 숫자가 완전동일
		//   3.2 실패 : A : 아웃(숫자 3개가 다 다르면)
		//              B : 하나라도 같으면 결과 출력
	}
}
