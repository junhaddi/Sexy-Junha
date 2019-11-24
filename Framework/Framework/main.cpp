#include "stdafx.h"
#include "Framework.h"
#include "GameScene.h"
#include "Math.h"

int main()
{
	Framework& f = Framework::GetInstance();
	f.Run(new GameScene(),L"≈∏¿Ã∆≤", 480, 640, false);
	return 0;
}