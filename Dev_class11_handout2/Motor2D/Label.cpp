#include "Label.h"



bool Label::LabelUpdate(float dt)
{
	return true;
}

bool Label::LabelDraw()
{
	return true;
}

Label::Label()
{
}

Label::Label(iPoint position, iPoint positionOffset, p2SString label) : UIElement(position,positionOffset,LABEL)
{
	this->label = label;
}


Label::~Label()
{
}
