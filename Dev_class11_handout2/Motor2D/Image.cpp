#include "Image.h"
#include "j1App.h"
#include "j1Textures.h"

#include "j1Render.h"


Image::Image()
{

}

Image::Image(iPoint position, iPoint positionOffset)
{
	this->image = App->gui->GetAtlas();
	image_section.x = 0;
	image_section.y = 0;
	SDL_QueryTexture(image, nullptr, nullptr, &image_section.w, &image_section.h);
}

Image::Image(iPoint position, iPoint positionOffset, SDL_Rect  image_section)
{
	this->image = App->gui->GetAtlas();
	this->image_section = image_section;
}

Image::Image(p2SString& path, iPoint position, iPoint positionOffset)
{
	this->image = App->tex->Load(path.GetString());

	
	SDL_QueryTexture(this->image, nullptr, nullptr, &image_section.w, &image_section.h);
	
	//return null need to check TODO
}


Image::~Image()
{
}

bool Image::ImagePreUpdate()
{
	return true;
}

bool Image::ImagePostUpdate()
{
	return true;
}

bool Image::ImageDraw(SDL_Rect &current)
{
	
	App->render->Blit(image, position.x + Imagerelativepos.x, position.y + Imagerelativepos.y, &current);
	
	return true;
}

