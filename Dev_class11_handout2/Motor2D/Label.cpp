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

Label::Label(SDL_Rect& position, iPoint Labelrelativepos, p2SString label) : Labelrelativepos(Labelrelativepos)
{
	this->label = label;
}


Label::~Label()
{
}
