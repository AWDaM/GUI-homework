#include "InteractiveImage.h"
#include "j1Render.h"


InteractiveImage::InteractiveImage(iPoint pos) : Interactive(pos)
{
}

InteractiveImage::InteractiveImage(iPoint pos, iPoint posOffsetA, iPoint posOffsetB, SDL_Rect interactiveSize, SDL_Rect image_section, j1Module* callback) : Interactive(pos,posOffsetA,interactiveSize,callback), Image(pos,posOffsetB,image_section) , UIElement(pos, posOffsetA)
{
	type = INTERACTIVE_IMAGE;
	current = &this->image_section;
}


InteractiveImage::~InteractiveImage()
{
}

bool InteractiveImage::PreUpdate()
{
	InteractivePreUpdate();
	return true;
}

bool InteractiveImage::Update(float dt)
{
	return true;
}

bool InteractiveImage::PostUpdate()
{
	return true;
}

bool InteractiveImage::Draw()
{
	InteractiveDraw();
	ImageDraw(*current);
	return true;
}

bool InteractiveImage::HandleAnimation(int eventType)
{
	if (eventType == 4)
	{
		current = &hover;
	}
	else if (eventType == 5 && !SDL_RectEquals(current, &click))
	{
		current = &image_section;
	}
	else if (eventType == 0 || eventType == 2)
	{
		current = &click;
	}
	else if (eventType == 1 || eventType == 3)
	{
		current = &image_section;
	}
	return true;
}
