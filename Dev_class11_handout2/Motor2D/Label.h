#ifndef __LABEL_H__
#define __LABEL_H__

#include "UIElement.h"
#include "j1Fonts.h"

class Label : virtual public UIElement
{
public:
	virtual bool Update(float dt) { return true; }
	virtual bool Draw() { return true; }

	Label();
	Label(iPoint position, iPoint positionOffset, p2SString label);
	~Label();

public:
	p2SString label;
	_TTF_Font* font;
};

#endif