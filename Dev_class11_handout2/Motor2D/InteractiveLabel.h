#ifndef __INTERACTIVE_LABEL_H__
#define __INTERACTIVE_LABEL_H__

#include "Interactive.h"
#include "Label.h"

class InteractiveLabel : public Interactive, public Label
{
public:
	InteractiveLabel(SDL_Rect & pos, iPoint posOffsetA, iPoint posOffsetB, p2SString fontPath, SDL_Color textColor, p2SString label, int size, j1Module* callback);
	~InteractiveLabel();

	bool PreUpdate();
	bool PostUpdate();
	bool Draw();
};

#endif