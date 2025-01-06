// EnumExample.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
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


// 기본 매크로 기능(텍스트를 치환)
#define MAX 100
#define MY_MAX int a
// 매크로 함수
#define ADD(a,b) ((a)*(b))
#define PRINT(str) printf(#str);
#define PRINT2(a,b)	printf(a##b);

#define CHEAT_VERSION
//#undef CHEAT_VERSION

int main()
{
	int gold = 0;
#ifdef CHEAT_VERSION
	gold = 1000000;
#else
	gold = 100;
#endif

	PRINT2("Hello", " World!");
	//PRINT("Hello World!!\n");
	//int result = ADD(10, 2+3 );
	//printf("%d", result);
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
