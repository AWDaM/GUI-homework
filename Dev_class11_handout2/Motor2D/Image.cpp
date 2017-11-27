#include "Image.h"
#include "j1App.h"
#include "j1Textures.h"


Image::Image(iPoint position, iPoint positionOffset, SDL_Rect &image) : UIElement(position,positionOffset)
{
	this->image = image;
}

Image::Image(p2SString* path)
{
	image = App->tex->Load(path->GetString());
}


Image::~Image()
{
}
