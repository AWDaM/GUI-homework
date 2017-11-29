#include "Label.h"
#include "j1Fonts.h"
#include "j1Render.h"



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

Label::Label(iPoint position, iPoint positionOffset, p2SString label) : UIElement(position,positionOffset)
{
	this->label = label;
}


Label::~Label()
{
}
