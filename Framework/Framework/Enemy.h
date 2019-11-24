#pragma once
#include "GameObject.h"
#include "AABBCollider.h"

class Enemy:
	public GameObject
{
public:
	Enemy();
public:
	AABBCollider col;
	GameObject* player;
};