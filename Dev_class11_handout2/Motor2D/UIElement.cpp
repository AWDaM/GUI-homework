#include "UIElement.h"

UIElement::UIElement()
{
}

UIElement::UIElement(iPoint position, iPoint positionOffset, UIType type, j1Module* callback) :
	position(position), positionOffset(positionOffset), type(type), callback(callback)
{
}


UIElement::~UIElement()
{
}
