#ifndef __IMAGE_H__
#define __IMAGE_H__

#include "UIElement.h"

class Image : public UIElement
{
public:
	virtual bool Update(float dt);
	virtual bool Draw();

	Image();
	~Image();
};

#endif