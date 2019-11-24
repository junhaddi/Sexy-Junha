#include "stdafx.h"
#include "GameScene.h"
#include "Player.h"
#include "FontObject.h"

void GameScene::Initialize()
{
	Enemy* enemy = (Enemy*)PushBackGameObject(new Enemy());
	enemy->transform->SetPosition(240.0f, 320.0f);

	FontObject* titleText = (FontObject*)PushBackGameObject(new FontObject());
	titleText->transform->SetPosition(60.0f, 80.0f);
	titleText->transform->SetScale(2, 2);
	wcscpy_s(titleText->fontRenderer->text, 100, L"������ �����\n�ڱ⢾�� ���·�����");

	FontObject* creditText = (FontObject*)PushBackGameObject(new FontObject());
	creditText->transform->SetPosition(30.0f, 580.0f);
	creditText->transform->SetScale(0.6f, 0.6f);
	wcscpy_s(creditText->fontRenderer->text, 100, L"���� �� ������ ������� �� ó�� ����ְ� ����ּ����� ���ڽ��ϴ٢�\n��������2019@������ ����");

	FontObject* scoreText = (FontObject*)PushBackGameObject(new FontObject());
	scoreText->transform->SetPosition(180.0f, 280.0f);
	wcscpy_s(scoreText->fontRenderer->text, 100, L"SPACE");

	player = (Player*)PushBackGameObject(new Player());
	player->enemy = enemy;
	player->scoreText = scoreText;
	player->titleText = titleText;
}
