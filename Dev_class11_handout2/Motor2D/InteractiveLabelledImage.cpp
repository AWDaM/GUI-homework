#include "InteractiveLabelledImage.h"



InteractiveLabelledImage::InteractiveLabelledImage(SDL_Rect & pos, iPoint posOffsetA, iPoint posOffsetB, iPoint posOffsetC, SDL_Rect image_section, p2SString fontPath, SDL_Color textColor, p2SString label, int size, j1Module* callback, bool draggable) :
	Interactive(pos, posOffsetA, callback), Label(pos, posOffsetB, fontPath, textColor, label, size), Image(pos, posOffsetC, image_section), UIElement(pos, draggable)
{
	type = UIType::INTERACTIVE_LABELLED_IMAGE;
	this->image_section = image_section;
}


InteractiveLabelledImage::~InteractiveLabelledImage()
{
}

bool InteractiveLabelledImage::PreUpdate()
{
	ImagePreUpdate();
	InteractivePreUpdate();
	LabelPreUpdate();
	return true;
}

bool InteractiveLabelledImage::PostUpdate()
{
	ImagePostUpdate();
	InteractivePostUpdate();
	LabelPostUpdate();
	return true;
}

bool InteractiveLabelledImage::Draw()
{
	ImageDraw(image_section);
	InteractiveDraw();
	LabelDraw();
	return true;
}