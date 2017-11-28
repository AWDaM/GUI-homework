#ifndef __INTERACTIVE_LABELLED_IMAGE_H__
#define __INTERACTIVE_LABELLED_IMAGE_H__

#include "Interactive.h"
#include "Label.h"
#include "Image.h"

class InteractiveLabelledImage : public Interactive, public Label, public Image
{
public:
	InteractiveLabelledImage(iPoint pos);
	~InteractiveLabelledImage();
};

#endif