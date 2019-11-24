#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "stdafx.h"
#include "Player.h"
#include "InputManager.h"
#include "GameScene.h"

Player::Player()
	:GameObject(L"resources/player.png"),
	moveSpeed(10.0f),
	col(*transform, Vector2(128.0f, 128.0f))
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	bgm = new SoundEvent();
	ang = new SoundEvent();
	bgm->LoadFile(L"resources/bgm.wav");
	ang->LoadFile(L"resources/ang.wav");
	
	bgm->Play();
	transform->SetPosition((float)InputManager::GetMouseX(), (float)InputManager::GetMouseY());
	GameScene& scene = (GameScene&)Scene::GetCurrentScene();
}

void Player::Update()
{
	transform->position = InputManager::GetMouseVector2();
	currentTime += 1.0f;
	bgmLoopTimer++;

	if (bgmLoopTimer > 130 * 60) {
		bgm->Stop();
		bgm->Play();
	}
}

void Player::LateUpdate()
{
	static int ssadda = 0;
	static wchar_t text;

	if (col.Intersected(enemy->col))
	{
	}
	/*
	 * °¡¹ö·Ç
	 */
	transform->rotatingAngle = sin(currentTime / 20.0f) * 480.0f;
	titleText->transform->rotatingAngle = -15 + cosf(currentTime / 15.0f) * 3;

	scoreText->transform->rotatingAngle = sin(currentTime / 10.0f) * 30.0f;
	scoreText->transform->SetScale(6 + sinf(currentTime / 5.0f) * 3, 6 + cosf(currentTime / 5.0f) * 3);
	scoreText->font->colorBrush->SetOpacity(abs(cosf(currentTime / 10.0f)));

	if (InputManager::GetKeyDown(VK_SPACE)) {
		ssadda++;
		_itow(ssadda, &text, 10);
		wcscpy_s(scoreText->fontRenderer->text, 100, &text);
		enemy->transform->SetScale(2, 2);
		ang->Stop();
		ang->Play();
	}
	enemy->transform->scale.x += (1 - enemy->transform->scale.x) / 10.0f;
	enemy->transform->scale.y += (1 - enemy->transform->scale.y) / 10.0f;
}
