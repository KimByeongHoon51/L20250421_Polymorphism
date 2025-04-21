// STL
// Standard Template Library
#include <iostream>
#include "Calculator.h"
#include <vector> // STL ȿ���� ���ؼ�, �ٸ��� ��Ա� ����
#include <list> //�߰� ���� ������, �˻� ����� ��δ�.
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
//// overload : �Լ� �̸��� �Ȱ����� ���ڰ� �ٸ� ���
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

	// ������ �𵨸�
	// class ����
	// �ڷ� ���� ����Ѵ�. (STL)
	// ������ ��������
	/*vector<AMonster*> Monsters;

	// �ڷ� �߰�
	Monsters.push_back(new AMonster());
	Monsters.push_back(new AMonster());
	Monsters.push_back(new AMonster());
	
	// �ݺ��� ����, ���
	vector<AMonster*>::iterator iter = Monsters.begin();
	iter++;
	delete(*iter);
	Monsters.erase(iter);*/

	// ���� ��� for�� ����
	/*for (auto Data : D)
	{
		cout << Data << endl;
	}*/
	
	// �޸� ����
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