#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include <string>
#include "Calc.h"

// 더하기
int Add(int a, int b);	// 선언부

int main()
{
	Calc c;
	// 함수
	int result = c.Add(10.f, 20.f); // overloading
	printf("result : %d", result);

	//// 포인터
	////int a = 10;
	////int* pA = &a;

	////printf("a %d\n", &a);
	////printf("pA : %d\n", pA);
	//// 배열
	//int ar[3];
	//printf("ar[0] %d\n", &ar[0]);
	//printf("ar : %d\n", ar);

	//// 반복문
	//// for, while, do while

	//for (int i = 0; i < 10; i++)
	//{
	//	// 0도 제외하고 짝수만 출력해보세요.
	//	if (i != 0 && i % 2 == 0)
	//		printf("%d\n", i);
	//}


	//int point;
	//scanf("%d", &point);
	//switch (point)
	//{
	//case 0:
	//	break;

	//case 1:
	//	break;

	//default:
	//	break;
	//}


	//// 조건문 - 분기문
	//// 0~100 을 입력받고
	//int point;
	//scanf("%d", &point);
	//// 입력받은 값이 90보다 크거나 같으면 A
	//// 그렇지 않고 70보다 크다 그리고 90보다 작다면 B
	//// 그렇지 않으면 F 
	//if (point >= 90)
	//{
	//    printf("A");
	//}
	//else if (point > 70 && point < 90) {
	//    printf("B");
	//}
	//else {
	//    printf("F");
	//}


	//// 정수
	//int i = 10;
	//printf("i : %d\n", i);
	//// 실수
	//float f = 3.14f;
	//printf("f : %.2f\n", f);
	//// 문자열
	//const char* myName = "JacobYi";
	//printf("myName : %s\n", myName);
	//std::string name = "JacobYi";
	//printf("name : %s\n", name.c_str());
	//// 논리
	//bool isGood = true;
	//printf("isGood : %d\n", isGood);
}

// 정의/구현
int Add(int a, int b)
{
	int c = a + b;
	return c;
}
float Add(float a, float b)
{
	float c = a + b;
	return c;
}
