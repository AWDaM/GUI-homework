#ifndef __INTERACTIVE_H__
#define __INTERACTIVE_H__

#include "UIElement.h"

class Interactive : public UIElement
{
public:
	Interactive();
	~Interactive();

public:
	virtual bool Update(float dt) { return true; }
	virtual bool Draw() { return true; }

public:
	SDL_Rect buttonMargin;

};

#endif