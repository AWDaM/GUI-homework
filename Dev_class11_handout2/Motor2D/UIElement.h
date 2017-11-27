#ifndef __UIELEMENT_H__
#define __UIELEMENT_H__

#include "p2Point.h"
#include "SDL/include/SDL.h"
#include "j1App.h"

class UIElement
{
public:
	virtual bool PreUpdate() { return true; }
	virtual bool Update(float dt) { return true; }
	virtual bool PostUpdate() { return true; }
	virtual bool Draw() { return true; }


	UIElement();
	~UIElement();

public:
	iPoint position;
	iPoint positionOffset;

};

#endif