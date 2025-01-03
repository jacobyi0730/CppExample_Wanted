#include <stdio.h>
#include <string>
using namespace std;

// 클래스 (사용자정의자료형)
class Animal
{
private:
    string type;
public:
    // 생성자함수
    Animal()    // 기본생성자
    {
    }

    Animal(int newAge) {
        age = newAge;

    }


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

};

int main()
{
    int a = 0;  // c style
    int c(0);   // cpp style
    

    Animal animal(10);  // 객체(Object), 인스턴스(Instance)
    animal.Walk();
    animal.SetType("Animal");
    animal.Print();





    Animal* pAnimal = new Animal(); // 할당
    Animal* pAnimal2 = pAnimal;
    pAnimal->Walk();

    delete pAnimal; // 반환
    pAnimal = nullptr;

    // pAnimal2는 댕글링 포인터(Dangling Pointer) 
}
