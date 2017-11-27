#ifndef __IMAGE_H__
#define __IMAGE_H__

#include "UIElement.h"
#include "p2sString.h"

struct SDL_Texture;

class Image : public UIElement
{
public:
	Image();
	Image(p2SString* path);
	~Image();
	
public:
	virtual bool Update(float dt) { return true; }
	virtual bool Draw() { return true; }
public:
	SDL_Texture* image;
};

#endif