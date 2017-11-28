#include "Interactive.h"
#include "j1Input.h"
#include "p2Log.h"


Interactive::Interactive(iPoint pos) : UIElement()
{
	buttonMargin.x = pos.x;
	buttonMargin.y = pos.y;
}


Interactive::~Interactive()
{
}

bool Interactive::PreUpdate()
{
	SDL_Point mousePosition;
	App->input->GetMousePosition(mousePosition.x, mousePosition.y);

	if (SDL_PointInRect(&mousePosition, &buttonMargin))
	{
		//if (!isMouseInside)
			//OnMouseOver();

		if (App->input->GetMouseButtonDown(SDL_BUTTON_LEFT) == KEY_DOWN)
			App->OnClick();
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
