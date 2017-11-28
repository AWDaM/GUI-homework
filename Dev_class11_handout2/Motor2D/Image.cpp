#include "Image.h"
#include "j1App.h"
#include "j1Textures.h"
#include "j1Gui.h"
#include "j1Render.h"


Image::Image()
{

}

Image::Image(iPoint position, iPoint positionOffset) : UIElement(position, positionOffset)
{
	this->image = App->gui->GetAtlas();
}

Image::Image(p2SString* path, iPoint position, iPoint positionOffset, SDL_Rect* image) : UIElement(position,positionOffset)
{
	if (image)
		image_section = *image;
	else
		image_section = { 0,0,0,0 };
	this->image = App->tex->Load(path->GetString());

}


Image::~Image()
{
}

bool Image::PreUpdate()
{
	Draw();
	return true;
}

bool Image::PostUpdate()
{
	Draw();
	return true;
}

bool Image::Draw()
{
	App->render->Blit(image, position.x + positionOffset.x, position.y + positionOffset.y, &image_section);
	return true;
}
