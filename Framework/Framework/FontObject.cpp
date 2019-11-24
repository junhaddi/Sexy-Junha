#include "stdafx.h"
#include "FontObject.h"

FontObject::FontObject()
	:GameObject(fontRenderer = new FontRenderer()), str(L"Hello")
{
	font = new Font(L"Arial");						//��Ʈ, ���� ���� ���ϴ� Font Ŭ���� ����(Font.h ����), �⺻ ũ�� 20pt
	fontRenderer->font = this->font;				//�ؽ�Ʈ�� �Ӽ��� �������ݴϴ�.
	fontRenderer->text = str;						//�ؽ�Ʈ�� ������ �������ݴϴ�.
	transform->SetPosition(300.0f, 300.0f);			//��ġ ����
	//transform->SetRotation(30.0f);					//���� ����
	transform->SetScale(5.0f, 5.0f);				//ũ�� ���� ��� �����մϴ�.
}

FontObject::~FontObject()
{
	SAFE_DELETE(font);
}
