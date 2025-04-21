// STL
// Standard Template Library
#include <iostream>
#include "Calculator.h"
#include <vector> // STL 효율성 위해서, 다른데 써먹기 위해
#include <list> //추가 삭제 빠른데, 검색 비용이 비싸다.
#include "Monster.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"
#include "Player.h"
#include "Goal.h"
#include "Floor.h"
#include "Wall.h"
#include "World.h"
#include "Vector2D.h"

using namespace std;

//class Adder
//{
//public:
//	int Add(int A, int B);
//	float Add(float A, float B);
//	char Add(char A, char B);
//};

//// name mangling
//// overload : 함수 이름은 똑같은데 인자가 다를 경우
//int Adder::Add(int A, int B)
//{
//	return A + B;
//}
//
//float Adder::Add(float A, float B)
//{
//	return A + B;
//}
//
//char Adder::Add(char A, char B)
//{
//	return A + B;
//}
//
//// C++ -> complier -> (template) object
//template <typename T>
//class TemplateAdder
//{
//public:
//	T Add(T A, T B) { return A + B; }
//};

//
//template<typename T>
//T TemplateAdder<T>::Add(T A, T B)
//{
//	return A + B;
//}

//class Data
//{
//
//};

int main()
{
	/*TemplateAdder<int> A;

	cout << A.Add(1, 2) << endl;*/

	/*Calculator<int> IntCal;
	cout << IntCal.Add(1, 1) << endl;
	cout << IntCal.Sub(4, 2) << endl;
	cout << IntCal.Mul(1, 2) << endl;
	cout << IntCal.Div(5, 2) << endl;*/

	/*vector<int> D;
	vector<int>::iterator iter;
	D.push_back(1);
	D.push_back(2);
	D.push_back(3);

	iter = D.begin();
	for (auto Data : D)
	{
		cout << Data << endl;
	}*/

	// 데이터 모델링
	// class 설계
	// 자료 구조 사용한다. (STL)
	// 포인터 개념이해
	/*vector<AMonster*> Monsters;

	// 자료 추가
	Monsters.push_back(new AMonster());
	Monsters.push_back(new AMonster());
	Monsters.push_back(new AMonster());
	
	// 반복자 이해, 사용
	vector<AMonster*>::iterator iter = Monsters.begin();
	iter++;
	delete(*iter);
	Monsters.erase(iter);*/

	// 범위 기반 for문 이해
	/*for (auto Data : D)
	{
		cout << Data << endl;
	}*/
	
	// 메모리 구조
	// Code
	// Data : Global
	// Heap
	// int[] -> 0x3333(1)
	// Monster ->0x56566()
	// 
	// ADD()
	// 
	// Monster[AMonster*] ->0X4444(0X56566)
	// PA[int*] -. 0x2222(0x1121)
	// A[int] -> 0x1121(1)
	// Stack

	UWorld* MyWorld = new UWorld();

	MyWorld->SpawnActor(new AGoblin());
	MyWorld->SpawnActor(new ASlime());
	MyWorld->SpawnActor(new APlayer());
	MyWorld->SpawnActor(new ABoar());
	MyWorld->SpawnActor(new AFloor());
	MyWorld->SpawnActor(new AFloor());
	MyWorld->SpawnActor(new AFloor());
	MyWorld->SpawnActor(new AFloor());
	MyWorld->SpawnActor(new AFloor());
	MyWorld->SpawnActor(new AFloor());
	MyWorld->SpawnActor(new AGoal());
	MyWorld->SpawnActor(new AWall());
	MyWorld->SpawnActor(new AWall());
	MyWorld->SpawnActor(new AWall());
	MyWorld->SpawnActor(new AWall());
	MyWorld->SpawnActor(new AWall());
	MyWorld->SpawnActor(new AWall());

	MyWorld->Run();

	delete MyWorld;
	MyWorld = nullptr;

	return 0;
}