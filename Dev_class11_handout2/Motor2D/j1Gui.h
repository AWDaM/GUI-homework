#ifndef __j1GUI_H__
#define __j1GUI_H__

#include "j1Module.h"

#include "j1App.h"
#include "SDL/include/SDL_rect.h"
struct SDL_Texture;


enum EventTypes
{
	DEFAULT_TYPE = -1,
	LEFT_MOUSE_PRESSED,
	LEFT_MOUSE_RELEASED,
	RIGHT_MOUSE_PRESSED,
	RIGHT_MOUSE_RELEASED,
	MOUSE_HOVER_IN,
	MOUSE_HOVER_OUT,
};


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
class Interactive;
class InteractiveImage;
struct SDL_Rect;
struct SDL_Texture;
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

	bool Draw();

	// Called before quitting
	bool CleanUp();

	// TODO 2: Create the factory methods
	UIElement* AddElement(UIType type, iPoint position, iPoint positionOffset);

	UIElement* AddImage(iPoint position, iPoint positionOffset, SDL_Rect* section);
	Interactive* AddInteractive(iPoint position, iPoint positionOffset, SDL_Rect* size, j1Module* callback);
	UIElement* AddLabel(iPoint position, iPoint positionOffset);
	InteractiveImage* AddInteractiveImage(iPoint position, iPoint positionOffsetA, iPoint positionOffsetB, SDL_Rect interactiveSection, SDL_Rect image_section, j1Module* callback);
	UIElement* AddInteractiveLabel(iPoint position, iPoint positionOffset);
	UIElement* AddInteractiveLabelledImage(iPoint position, iPoint positionOffset);
	UIElement* AddLabelledImage(iPoint position, iPoint positionOffset);

	UIElement* DeleteElement(UIElement* element);

	UIElement* AddImage_From_otherFile(iPoint position, iPoint positionOffset, p2SString* path, SDL_Rect* section = nullptr);
	// Gui creation functions

	bool CreateSceneIntroGUI();

	SDL_Texture* GetAtlas() const;
	p2List<UIElement*> elements;

private:

	SDL_Texture* atlas = nullptr;
	p2SString atlas_file_name;
	p2SString background;
};

#endif // __j1GUI_H__