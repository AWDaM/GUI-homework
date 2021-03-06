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
	Image(SDL_Rect& position, iPoint Imagerelativepos);
	Image(SDL_Rect& position, iPoint Imagerelativepos, SDL_Rect& image_section);
	Image(p2SString& path, SDL_Rect& position, iPoint Imagerelativepos);

	~Image();
	
	 bool ImagePreUpdate();
	 bool ImageUpdate(float dt) { return true; }
	 bool ImagePostUpdate();
	 bool ImageDraw(SDL_Rect &current);


public:
	iPoint Imagerelativepos;
	SDL_Rect image_section;
	SDL_Texture* image = nullptr;
};

#endif