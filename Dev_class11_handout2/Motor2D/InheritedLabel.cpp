#include "InheritedLabel.h"



InheritedLabel::InheritedLabel()
{
}

InheritedLabel::InheritedLabel(SDL_Rect& position, iPoint positionOffset, p2SString & label): Label(position, positionOffset, label), UIElement(position)
{
}


InheritedLabel::~InheritedLabel()
{
}
