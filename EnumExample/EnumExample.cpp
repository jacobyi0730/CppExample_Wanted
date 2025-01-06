// EnumExample.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <iostream>
//
//namespace EnemyState {
//	enum EEnemyState {
//		IDLE,
//		WALK = 10,
//		ATTACK
//	};
//}
//
//namespace EnemyState {
//	enum EEnemy2State {
//		IDLE = 100,
//		WALK,
//		ATTACK
//	};
//}
//
//// scoped enum
//enum class EEnemyState : unsigned char {
//	IDLE,
//	WALK,
//	ATTACK
//};
//
//// 내상태
//EEnemyState State = EEnemyState::IDLE;
//
//void Tick()
//{
//	switch (State)
//	{
//	case EEnemyState::IDLE:
//		// 만약 내상태가 대기라면
//		break;
//	case EEnemyState::WALK:
//		// 그렇지 않고 내 상태가 이동
//		break;
//	case EEnemyState::ATTACK:
//		// 그렇지 않고 내 상태가 공격
//		break;
//	}
//}

//
//// 기본 매크로 기능(텍스트를 치환)
//#define MAX 100
//#define MY_MAX int a
//// 매크로 함수
//#define ADD(a,b) ((a)*(b))
//#define PRINT(str) printf(#str);
//#define PRINT2(a,b)	printf(a##b);
//
//#define CHEAT_VERSION
////#undef CHEAT_VERSION
//
//int main2()
//{
//
////	int gold = 0;
////#ifdef CHEAT_VERSION
////	gold = 1000000;
////#else
////	gold = 100;
////#endif
////
////	PRINT2("Hello", " World!");
//	//PRINT("Hello World!!\n");
//	//int result = ADD(10, 2+3 );
//	//printf("%d", result);
//}


int main()
{
	// 별을 찍어봅시다.
	// 숫자를 하나 입력받고
	int count;
	std::cin >> count;
	// 그 숫자만큼 행을 만들고
	for (int i = 0; i < count; i++)
	{
		// 위에서부터 아래로 1개씩 *표시가 늘어나도록
		for (int j = 0; j < i + 1; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}
