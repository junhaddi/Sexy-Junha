#pragma once
#include "GameObject.h"
#include "FontRenderer.h"

class FontObject :
	public GameObject
{
public:
	FontObject();
	~FontObject();

	Font* font;						//자세한 설명은 Font.h 참고
	FontRenderer* fontRenderer;		//자세한 설명은 FontRenderer.h 참고
	wchar_t str[100];
};