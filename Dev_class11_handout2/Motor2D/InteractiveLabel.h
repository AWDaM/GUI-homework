#ifndef __INTERACTIVE_LABEL_H__
#define __INTERACTIVE_LABEL_H__

#include "Interactive.h"
#include "Label.h"

class InteractiveLabel : public Interactive, public Label
{
public:
	InteractiveLabel(SDL_Rect& pos, bool draggable = false);
	~InteractiveLabel();
};

#endif