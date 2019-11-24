#include "stdafx.h"
#include "Framework.h"
#include "GameScene.h"
#include "Math.h"

#pragma comment(linker, "/ENTRY:mainCRTStartup")

int main()
{
	Framework& f = Framework::GetInstance();
	f.Run(new GameScene(),L"SPACE¢Ñ¢Ñ ¹þ±â±â", 480, 640, false);
	return 0;
}