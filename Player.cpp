#include "Player.h"
#include <iostream>

using namespace std;

APlayer::APlayer()
{
	//cout << "플레이어 생성" << endl;
}

APlayer::~APlayer()
{
	//cout << "플레이어 삭제" << endl;
}

void APlayer::Tick()
{
}

void APlayer::Move()
{
	cout << "이동한다" << endl;
}