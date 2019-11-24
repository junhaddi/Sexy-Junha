#pragma once
#include "GameObject.h"
#include "FontRenderer.h"

class FontObject :
	public GameObject
{
public:
	FontObject();
	~FontObject();

	Font* font;						//�ڼ��� ������ Font.h ����
	FontRenderer* fontRenderer;		//�ڼ��� ������ FontRenderer.h ����
	wchar_t str[100];
};