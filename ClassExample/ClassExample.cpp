#include <stdio.h>
#include <string>
using namespace std;

// 클래스 (사용자정의자료형)
class Animal
{
private:
    string type;
public:
    // 생성자함수 (Constructor)
    Animal()    // 기본생성자
    {
        printf("Animal 기본 생성자\n");
    }

    Animal(int newAge) {
        age = newAge;
        printf("Animal 기본 생성자(매개변수)\n");
    }

    Animal(const Animal& ani)
    {
        printf("Animal 복사 생성자\n");
        age = ani.age;
        type = ani.type;
    }

    // 소멸자/파괴자 Destructor
    ~Animal() {

    }

#pragma region 기타 코드
    int age;

    void SetType(string newType)
    {
        type = newType;
    }

    string GetType()
    {
        return type;
    }

    void Print() {
        printf("age : %d, type : %s\n", age, type.c_str());
    }

    void Walk() {
        printf("Animal::Walk\n");
    }
#pragma endregion
};

int main()
{
    // 클래스의 객체를 복사
    Animal a1;
    //Animal a2 = a1;
    Animal a2(a1);

    //int a = 0;  // c style
    //int c(0);   // cpp style
    //

    //Animal animal(10);  // 객체(Object), 인스턴스(Instance)
    //animal.Walk();
    //animal.SetType("Animal");
    //animal.Print();





    //Animal* pAnimal = new Animal(); // 할당
    //Animal* pAnimal2 = pAnimal;
    //pAnimal->Walk();

    //delete pAnimal; // 반환
    //pAnimal = nullptr;

    //// pAnimal2는 댕글링 포인터(Dangling Pointer) 
}
