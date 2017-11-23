#ifndef __INTERACTIVE_H__
#define __INTERACTIVE_H__

#include "UIElement.h"

class Interactive : public UIElement
{
public:
	virtual bool Update(float dt);
	virtual bool Draw();

	Interactive();
	~Interactive();
};

#endif