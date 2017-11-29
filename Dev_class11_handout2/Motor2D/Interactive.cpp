#include "Interactive.h"
#include "j1Input.h"
#include "p2Log.h"
#include "j1Fonts.h"
#include "j1Render.h"

Interactive::Interactive()
{
}

Interactive::Interactive(iPoint pos) : UIElement()
{
	buttonMargin.x = pos.x;
	buttonMargin.y = pos.y;
}

Interactive::Interactive(iPoint pos, iPoint posOffset, SDL_Rect size, j1Module* callback) : buttonMargin(size), callback(callback),
	UIElement(pos, posOffset, UIType::INTERACTIVE)
{}


Interactive::~Interactive()
{
}

bool Interactive::InteractivePreUpdate()
{
	bool ret = true;

	SDL_Point mousePosition;
	App->input->GetMousePosition(mousePosition.x, mousePosition.y);

	if (SDL_PointInRect(&mousePosition, &buttonMargin))
	{
		if (App->input->GetMouseButtonDown(SDL_BUTTON_LEFT) == KEY_DOWN)
			callback->OnEvent(this, EventTypes::LEFT_MOUSE_PRESSED);
		else if (App->input->GetMouseButtonDown(SDL_BUTTON_LEFT) == KEY_UP)
			callback->OnEvent(this, EventTypes::LEFT_MOUSE_RELEASED);
		else if (App->input->GetMouseButtonDown(SDL_BUTTON_RIGHT) == KEY_DOWN)
			callback->OnEvent(this, EventTypes::RIGHT_MOUSE_PRESSED);
		else if (App->input->GetMouseButtonDown(SDL_BUTTON_RIGHT) == KEY_UP)
			callback->OnEvent(this, EventTypes::RIGHT_MOUSE_RELEASED);
		else if (!isMouseInside)
			callback->OnEvent(this, EventTypes::MOUSE_HOVER_IN);

		isMouseInside = true;
	}
	else
	{
		if (isMouseInside)
			callback->OnEvent(this, EventTypes::MOUSE_HOVER_OUT);

		isMouseInside = false;
	}

	return ret;
}


bool Interactive::InteractiveDraw()
{
	fontTexture = App->font->Print(text.GetString() , { 255,0,0,0 }, App->font->default);


	App->render->Blit(fontTexture, 300, 290);
	return true;
}


