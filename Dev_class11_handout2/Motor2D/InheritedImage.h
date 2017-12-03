#ifndef __INHERITEDIMAGE_H__
#define __INHERITEDIMAGE_H__
#include "Image.h"
class InheritedImage : public Image
{
public:
	InheritedImage();
	InheritedImage(SDL_Rect& position, iPoint positionOffset);
	InheritedImage(SDL_Rect& position, iPoint positionOffset, SDL_Rect &image_section);
	InheritedImage(SDL_Rect& position, iPoint positionOffset, p2SString &path);

	~InheritedImage();

	bool PreUpdate();
	bool PostUpdate();
	bool Draw();

};

#endif