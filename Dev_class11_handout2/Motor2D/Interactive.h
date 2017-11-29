#ifndef __INTERACTIVE_H__
#define __INTERACTIVE_H__

#include "UIElement.h"
#include "SDL/include/SDL.h"

class Interactive : virtual public UIElement
{
public:
	Interactive();
	Interactive(iPoint pos);
	Interactive(iPoint pos, iPoint posOffset, SDL_Rect size, j1Module* callback);
	~Interactive();

public:
	 bool InteractivePreUpdate();

	 bool InteractiveDraw();

	bool CheckEvents();


private:
	//void OnClick();
	//void OnMouseOver();

public:
	SDL_Rect	buttonMargin;
	bool		isMouseInside = false;
	j1Module* callback = nullptr;
};

#endif