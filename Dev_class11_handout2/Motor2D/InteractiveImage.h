#ifndef __INTERACTIVE_IMAGE_H__
#define __INTERACTIVE_IMAGE_H__

#include "Interactive.h"
#include "Image.h"

class InteractiveImage : public Interactive, public Image
{
public:
	InteractiveImage();
	~InteractiveImage();
};

#endif