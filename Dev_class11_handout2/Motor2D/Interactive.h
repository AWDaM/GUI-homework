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


public:
	iPoint Interactiverelativepos;
	SDL_Rect	buttonMargin;
	bool		isMouseInside = false;
	j1Module* callback = nullptr;
	SDL_Texture* fontTexture;
	p2SString text = "Default Text";

};

#endif