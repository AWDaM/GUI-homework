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
	Label(iPoint position, iPoint positionOffset, p2SString label);
	~Label();

public:
	p2SString label;
	_TTF_Font* font;
};

#endif