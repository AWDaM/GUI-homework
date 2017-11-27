#ifndef __IMAGE_H__
#define __IMAGE_H__

#include "UIElement.h"

struct SDL_Texture;

class Image : public UIElement
{
public:
	Image();
	~Image();
	
public:
	virtual bool Update(float dt);
	virtual bool Draw();

public:
	SDL_Texture* image;
};

#endif