#ifndef __IMAGE_H__
#define __IMAGE_H__

#include "UIElement.h"
#include "p2SString.h"
#include "SDL/include/SDL_rect.h"

struct SDL_Texture;


class Image : public UIElement
{
public:
	Image();
	Image(iPoint position, iPoint positionOffset);
	Image(p2SString* path, iPoint position, iPoint positionOffset, SDL_Rect* image = nullptr);

	~Image();
	
public:
	virtual bool PreUpdate();
	virtual bool Update(float dt) { return true; }
	virtual bool PostUpdate();
	virtual bool Draw();

public:
	SDL_Rect image_section;
	SDL_Texture* image = nullptr;
};

#endif