#include "InteractiveLabelledImage.h"



InteractiveLabelledImage::InteractiveLabelledImage(SDL_Rect & pos, iPoint posOffsetA, iPoint posOffsetB, iPoint posOffsetC, p2SString fontPath, SDL_Color textColor, p2SString label, int size, SDL_Rect image_section, j1Module* callback, bool draggable) :
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
	InteractivePreUpdate();
	LabelPreUpdate();
	ImagePreUpdate();
	return true;
}

bool InteractiveLabelledImage::PostUpdate()
{
	InteractivePostUpdate();
	LabelPostUpdate();
	ImagePostUpdate();
	return true;
}

bool InteractiveLabelledImage::Draw()
{
	InteractiveDraw();
	LabelDraw();
	ImageDraw(image_section);
	return true;
}