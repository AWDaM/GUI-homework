#ifndef __INTERACTIVE_LABELLED_IMAGE_H__
#define __INTERACTIVE_LABELLED_IMAGE_H__

#include "Interactive.h"
#include "Label.h"
#include "Image.h"

class InteractiveLabelledImage : public Interactive, public Label, public Image
{
public:
	InteractiveLabelledImage(SDL_Rect & pos, iPoint posOffsetA, iPoint posOffsetB, iPoint posOffsetC, p2SString fontPath, SDL_Color textColor, p2SString label, int size, SDL_Rect image_section, j1Module* callback, bool draggable);

	~InteractiveLabelledImage();

	bool PreUpdate();
	bool PostUpdate();
	bool Draw();
};

#endif