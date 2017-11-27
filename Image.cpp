#include "Image.h"
#include "j1App.h"
#include "j1Textures.h"


Image::Image()
{
}

Image::Image(p2SString* path)
{
	image = App->tex->Load(path->GetString());
}


Image::~Image()
{
}
