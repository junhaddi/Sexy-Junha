#pragma once
#include "GameObject.h"
#include "AABBCollider.h"
#include "Enemy.h"
#include "FontObject.h"
#include "Scene.h"
#include "SoundEvent.h"

class Player :
	public GameObject
{
public:
	float moveSpeed;
	float currentTime = 0;
	int bgmLoopTimer = 0;

	AABBCollider col;
	Enemy* enemy;
	FontObject* scoreText, *titleText;
	SoundEvent* bgm, *ang;

	Player();
	virtual void Update();
	virtual void LateUpdate();
};