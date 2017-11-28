#include "InteractiveImage.h"



InteractiveImage::InteractiveImage(iPoint pos) : Interactive(pos)
{
}

InteractiveImage::InteractiveImage(iPoint pos, iPoint posOffsetA, iPoint posOffsetB, SDL_Rect interactiveSize, SDL_Rect image_section, j1Module* callback) : Interactive(pos,posOffsetA,interactiveSize,callback), Image(pos,posOffsetB,image_section)
{
}


InteractiveImage::~InteractiveImage()
{
}
