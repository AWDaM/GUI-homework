#include "UIElement.h"
#include "p2Log.h"

void UIElement::MoveElement(iPoint difference)
{
	position.x -= difference.x;
	position.y -= difference.y;
}

UIElement::UIElement()
{
}

UIElement::UIElement(SDL_Rect & position) : position(position)
{
	LOG("%i, %i", this->position.x, this->position.y);
}


UIElement::~UIElement()
{
}
