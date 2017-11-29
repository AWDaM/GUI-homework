#pragma once
#include "Label.h"
class InheritedLabel : public Label
{
public:
	InheritedLabel();
	InheritedLabel(iPoint position, iPoint positionOffset, p2SString& label);
	~InheritedLabel();
};

