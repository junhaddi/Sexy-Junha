#include "stdafx.h"
#include "Enemy.h"

Enemy::Enemy()
	:GameObject(L"resources/enemy.png"),
	col(*transform, Vector2(128.0f, 128.0f))
{
}