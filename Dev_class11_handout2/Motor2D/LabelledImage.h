#ifndef __LABELLED_IMAGE_H__
#define __LABELLED_IMAGE_H__

#include "Label.h"
#include "Image.h"

class LabelledImage : public Label, public Image
{
public:
	LabelledImage();
	~LabelledImage();
};

#endif