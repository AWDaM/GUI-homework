#include "InheritedInteractive.h"



InheritedInteractive::InheritedInteractive()
{
}

InheritedInteractive::InheritedInteractive(SDL_Rect& pos) : Interactive(pos)
{
}

InheritedInteractive::InheritedInteractive(SDL_Rect& pos, iPoint posOffset, SDL_Rect & size, j1Module * callback) : Interactive(pos, posOffset, callback), UIElement(pos)
{
}


InheritedInteractive::~InheritedInteractive()
{
}

bool InheritedInteractive::PreUpdate()
{
	InteractivePreUpdate();
	return true;
}

bool InheritedInteractive::Draw()
{
	InteractiveDraw();
	return true;
}
