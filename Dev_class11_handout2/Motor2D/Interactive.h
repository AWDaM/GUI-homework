#ifndef __INTERACTIVE_H__
#define __INTERACTIVE_H__

#include "UIElement.h"
#include "SDL/include/SDL.h"

class Interactive : public UIElement
{
public:
	Interactive(iPoint pos);
	~Interactive();

public:
	virtual bool PreUpdate();
	virtual bool Draw() { return true; }

private:
	//void OnClick();
	//void OnMouseOver();

public:
	SDL_Rect	buttonMargin;
	bool		isMouseInside = false;
};

#endif