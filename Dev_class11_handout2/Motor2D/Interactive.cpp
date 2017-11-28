#include "Interactive.h"
#include "j1Input.h"
#include "p2Log.h"


Interactive::Interactive(iPoint pos) : UIElement()
{
	buttonMargin.x = pos.x;
	buttonMargin.y = pos.y;
}

Interactive::Interactive(iPoint pos, iPoint posOffset, SDL_Rect size, j1Module * callback) : UIElement(pos,posOffset)
{
	buttonMargin = size;
	this->callback = callback;
}


Interactive::~Interactive()
{
}

bool Interactive::InteractivePreUpdate()
{
	SDL_Point mousePosition;
	App->input->GetMousePosition(mousePosition.x, mousePosition.y);

	if (SDL_PointInRect(&mousePosition, &buttonMargin))
	{
		if (!isMouseInside)
			OnMouseOver();

		if (App->input->GetMouseButtonDown(SDL_BUTTON_LEFT) == KEY_DOWN)
			OnClick();
	}
	else
		isMouseInside = false;

	return true;
}

void Interactive::OnClick()
{
	LOG("I've been pressed! :S");
}

void Interactive::OnMouseOver()
{
	LOG("The mouse is over me! o.O");
	isMouseInside = true;
}
