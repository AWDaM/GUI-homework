#ifndef __UIELEMENT_H__
#define __UIELEMENT_H__

#include "p2Point.h"
#include "SDL/include/SDL.h"

class UIElement
{
public:
	virtual bool PreUpdate();
	virtual bool Update(float dt);
	virtual bool PostUpdate();
	virtual bool Draw();


	UIElement();
	~UIElement();

public:
	iPoint position;
	iPoint positionOffset;

};

#endif