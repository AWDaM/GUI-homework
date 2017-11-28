#ifndef __UIELEMENT_H__
#define __UIELEMENT_H__

#include "p2Point.h"
#include "j1App.h"
#include "j1Gui.h"

class UIElement
{
public:
	virtual bool PreUpdate() { return true; }
	virtual bool Update(float dt) { return true; }
	virtual bool PostUpdate() { return true; }
	virtual bool Draw() { return true; }
	virtual bool CheckEvents() { return true; }


	UIElement();
	UIElement(iPoint position, iPoint positionOffset, UIType type = NO_TYPE, j1Module* callback = nullptr);
	~UIElement();

public:
	UIType type = NO_TYPE;
	iPoint position;
	iPoint positionOffset;
	j1Module* callback = nullptr;

};

#endif