#include "Interactive.h"
#include "j1Input.h"
#include "p2Log.h"


Interactive::Interactive(iPoint pos) : UIElement()
{
	buttonMargin.x = pos.x;
	buttonMargin.y = pos.y;
}

Interactive::Interactive(iPoint pos, iPoint posOffset, SDL_Rect size, j1Module* callback) : buttonMargin(size),
	UIElement(pos, posOffset, UIType::INTERACTIVE, callback)
{}


Interactive::~Interactive()
{
}

bool Interactive::InteractivePreUpdate()
{

	return true;
}


bool Interactive::InteractiveDraw()
{
	return true;
}

bool Interactive::CheckEvents()
{
	bool ret = true;

	SDL_Point mousePosition;
	App->input->GetMousePosition(mousePosition.x, mousePosition.y);

	if (SDL_PointInRect(&mousePosition, &buttonMargin))
	{
		callback->OnEvent(this, EventTypes::MOUSE_HOVER_IN);
	}

	return ret;
}

bool Interactive::PreUpdate()
{
	return true;
}

