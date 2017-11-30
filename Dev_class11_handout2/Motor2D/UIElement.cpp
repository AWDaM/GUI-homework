#include "UIElement.h"
#include "p2Log.h"

UIElement::UIElement()
{
}

UIElement::UIElement(iPoint position) : position(position)
{
	LOG("%i, %i", this->position.x, this->position.y);
}


UIElement::~UIElement()
{
}
