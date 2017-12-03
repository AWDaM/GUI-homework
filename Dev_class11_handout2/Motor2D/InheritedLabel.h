#pragma once
#include "Label.h"
class InheritedLabel : public Label
{
public:
	InheritedLabel();
	InheritedLabel(SDL_Rect& position, iPoint positionOffset, p2SString& label);
	~InheritedLabel();
};

