#include "InheritedLabel.h"



InheritedLabel::InheritedLabel()
{
}

InheritedLabel::InheritedLabel(SDL_Rect& position, iPoint positionOffset, p2SString fontPath, SDL_Color textColor, p2SString & label, int size) : Label(position, positionOffset, fontPath, textColor, label, size), UIElement(position)
{
}


InheritedLabel::~InheritedLabel()
{
}

bool InheritedLabel::Draw()
{
	LabelDraw();
	return true;
}
