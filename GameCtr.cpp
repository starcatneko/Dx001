#include "GameCtr.h"

GameCtr* GameCtr::Instance = nullptr;

void GameCtr::Create()
{
	if (Instance)
	{
		Instance = new GameCtr();
	}
}
void GameCtr::Init()
{
	key.reset();

}

void GameCtr::Destroy()
{
	if (!Instance)
	{
		delete Instance;
		Instance = nullptr;
	}
}

void GameCtr::Update()
{
	Draw();
}

void GameCtr::Draw()
{

}
GameCtr::GameCtr()
{
}


GameCtr::~GameCtr()
{
}
