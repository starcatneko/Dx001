
#include "DxLib.h"
#include "GameCtr.h"
#define SCREEN_X 1280
#define SCREEN_Y 720


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetGraphMode(SCREEN_X, SCREEN_Y,16);
	ChangeWindowMode(true);
	DxLib_Init();
	while (ProcessMessage() == 0&&CheckHitKey(KEY_INPUT_ESCAPE) == false)
	{
		ScreenFlip();
		GameCtr::Get()->Update();

		ClsDrawScreen();
	}
	return 0;
	DxLib_End();
}

