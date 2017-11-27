#ifndef __INTERACTIVE_H__
#define __INTERACTIVE_H__

#include "UIElement.h"

class Interactive : public UIElement
{
public:
	Interactive(iPoint pos);
	~Interactive();

public:
	virtual bool Update(float dt);
	virtual bool Draw() { return true; }

private:
	void OnClick();
	void OnMouseOver();

public:
	SDL_Rect	buttonMargin;
	bool		isMouseInside = false;
};

#endif