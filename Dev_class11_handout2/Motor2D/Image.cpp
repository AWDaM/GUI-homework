#include "Image.h"
#include "j1App.h"
#include "j1Textures.h"


Image::Image(iPoint position, iPoint positionOffset, SDL_Rect &image) : UIElement(position,positionOffset)
{
	image_section = image;
}

Image::Image()
{
//	image_section = App->tex->Load(path->GetString());
}


Image::~Image()
{
}
