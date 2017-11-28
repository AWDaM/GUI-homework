#ifndef __INTERACTIVE_H__
#define __INTERACTIVE_H__

#include "UIElement.h"

class Interactive : virtual public UIElement
{
public:
	Interactive(iPoint pos);
	Interactive(iPoint pos, iPoint posOffset, SDL_Rect size, j1Module* callback);
	~Interactive();

public:
	 bool InteractivePreUpdate();
	virtual bool InteractiveDraw() { return true; }

private:
	void OnClick();
	void OnMouseOver();

public:
	j1Module* callback;
	SDL_Rect	buttonMargin;
	bool		isMouseInside = false;
};

#endif