#ifndef __INHERITEDINTERACTIVE__
#define __INHERITEDINTERACTIVE__
#include "Interactive.h"
class InheritedInteractive :
	public Interactive
{
public:
	InheritedInteractive();
	InheritedInteractive(iPoint pos);
	InheritedInteractive(iPoint pos, iPoint posOffset, SDL_Rect &size, j1Module* callback);
	~InheritedInteractive();

	bool PreUpdate();
	bool Draw();
};

#endif
