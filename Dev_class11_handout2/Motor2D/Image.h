#ifndef __IMAGE_H__
#define __IMAGE_H__

#include "UIElement.h"
#include "p2SString.h"
#include "SDL/include/SDL_rect.h"

struct SDL_Texture;


class Image : virtual public UIElement
{
public:
	Image();
	Image(iPoint position, iPoint positionOffset);
	Image(iPoint position, iPoint positionOffset, SDL_Rect image_section);
	Image(p2SString& path, iPoint position, iPoint positionOffset);

	~Image();
	
	 bool ImagePreUpdate();
	 bool ImageUpdate(float dt) { return true; }
	 bool ImagePostUpdate();
	 bool ImageDraw();


public:
	SDL_Rect image_section;
	SDL_Texture* image = nullptr;
};

#endif