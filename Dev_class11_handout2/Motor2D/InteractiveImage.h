#ifndef __INTERACTIVE_IMAGE_H__
#define __INTERACTIVE_IMAGE_H__

#include "Interactive.h"
#include "Image.h"

class InteractiveImage : public Interactive, public Image
{
public:
	InteractiveImage(iPoint pos);
	InteractiveImage(iPoint pos, iPoint posOffsetA, iPoint posOffsetB, SDL_Rect interactiveSize, SDL_Rect image_section, j1Module* callback);
	~InteractiveImage();
};

#endif