#ifndef __LABEL_H__
#define __LABEL_H__

#include "UIElement.h"
#include "j1Fonts.h"

class Label : public UIElement
{
public:
	virtual bool Update(float dt) { return true; }
	virtual bool Draw() { return true; }

	Label();
	~Label();

public:

};

#endif