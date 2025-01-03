#include <stdio.h>
#include <string>
using namespace std;

// 클래스 (사용자정의자료형)
class Animal
{
protected:
    string type;
public:
    // 생성자함수 (Constructor)
    Animal()    // 기본생성자
    {
        printf("Animal 기본 생성자\n");
    }

    Animal(int newAge) : age(newAge){
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

public:
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
        printf("Animal::Print -> age : %d, type : %s\n", age, type.c_str());
    }

    void Walk() {
        printf("Animal::Walk\n");
    }

};

class Cat : public Animal {
public:

    int tall;
    Cat(int newAge) : Animal(newAge)
    {
        tall = 100;
    }

    void Print() {
        printf("Cat::Print -> age : %d, type : %s\n", age, type.c_str());
    }
};

int main()
{



    //Cat cat(10);
    //Cat* pCat = &cat;
    //pCat->Print();
    //
    //// 자식을 부모포인터에 담다.(Up Casting)
    //Animal* pAni = &cat;    

    //// 부모를 자식포인터에 담다.(Down Casting)
    //Animal animal(10);
    //Cat* pCat2 = (Cat*)(&animal);
    //printf("pCat2의 tall : %d\n", pCat2->tall);
    //
    //Cat* pCat3 = (Cat*)(&pAni);
    //printf("pCat3의 tall : %d\n", pCat3->tall);

    
    

    //// 클래스의 객체를 복사
    //Animal a1;
    ////Animal a2 = a1;
    //Animal a2(a1);

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
