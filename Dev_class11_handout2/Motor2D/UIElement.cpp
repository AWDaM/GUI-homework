#include "UIElement.h"

UIElement::UIElement()
{
}

UIElement::UIElement(iPoint position, iPoint positionOffset, UIType type) :
	position(position), positionOffset(positionOffset), type(type)
{
}


UIElement::~UIElement()
{
}
