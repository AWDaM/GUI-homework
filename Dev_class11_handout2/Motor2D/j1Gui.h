#ifndef __j1GUI_H__
#define __j1GUI_H__

#include "j1Module.h"



#define CURSOR_WIDTH 2
enum UIType
{
	NO_TYPE,
	INTERACTIVE,
	IMAGE,
	LABEL,
	INTERACTIVE_IMAGE,
	INTERACTIVE_LABELLED_IMAGE,
	INTERACTIVE_LABEL,
	LABELLED_IMAGE,
};
// TODO 1: Create your structure of classes
class UIElement;
// ---------------------------------------------------
class j1Gui : public j1Module
{
public:

	j1Gui();

	// Destructor
	virtual ~j1Gui();

	// Called when before render is available
	bool Awake(pugi::xml_node&);

	// Call before first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called after all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();

	// TODO 2: Create the factory methods
	UIElement* AddElement(UIType type, iPoint position, iPoint positionOffset);

	UIElement* DeleteElement(UIElement* element);

	UIElement* AddImage_From_otherFile(iPoint position, p2SString* path);
	// Gui creation functions

	const SDL_Texture* GetAtlas() const;

private:

	p2List<UIElement*> elements;
	SDL_Texture* atlas;
	p2SString atlas_file_name;
};

#endif // __j1GUI_H__