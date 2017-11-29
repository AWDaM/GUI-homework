#include "InheritedInteractive.h"



InheritedInteractive::InheritedInteractive()
{
}

InheritedInteractive::InheritedInteractive(iPoint pos) : Interactive(pos)
{
}

InheritedInteractive::InheritedInteractive(iPoint pos, iPoint posOffset, SDL_Rect & size, j1Module * callback) : Interactive(pos, posOffset, size, callback)
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
