#ifndef __LABEL_H__
#define __LABEL_H__

#include "UIElement.h"
#include "j1Fonts.h"

class Label : virtual public UIElement
{
public:
	bool LabelUpdate(float dt);
	bool LabelDraw();

	Label();
	Label(iPoint position, iPoint positionOffset, p2SString fontPath, SDL_Color textColor, p2SString label, int size = 12);
	~Label();

public:
	iPoint Labelrelativepos;
	p2SString label;
	_TTF_Font* font;
	SDL_Texture* fontTexture;
};

#endif