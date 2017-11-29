#include "UIElement.h"
#include "p2Log.h"

UIElement::UIElement()
{
}

UIElement::UIElement(iPoint position, iPoint positionOffset) : position(position), positionOffset(positionOffset)
{
	LOG("%i, %i", this->position.x, this->position.y);
}


UIElement::~UIElement()
{
}
