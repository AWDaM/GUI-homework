#include "InheritedImage.h"



InheritedImage::InheritedImage()
{
}

InheritedImage::InheritedImage(SDL_Rect& position, iPoint positionOffset) : Image(position, positionOffset), UIElement(position)
{
}

InheritedImage::InheritedImage(SDL_Rect& position, iPoint positionOffset, SDL_Rect & image_section) : Image(position, positionOffset, image_section), UIElement(position)
{
}

InheritedImage::InheritedImage(SDL_Rect& position, iPoint positionOffset, p2SString & path) : Image(path, position, positionOffset), UIElement(position)
{
}


InheritedImage::~InheritedImage()
{
}

bool InheritedImage::PreUpdate()
{
	ImagePreUpdate();
	return true;
}

bool InheritedImage::PostUpdate()
{
	ImagePostUpdate();
	return true;
}

bool InheritedImage::Draw()
{
	ImageDraw(image_section);
	return false;
}
