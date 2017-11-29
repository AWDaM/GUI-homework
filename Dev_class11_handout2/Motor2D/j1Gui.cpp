#include "p2Defs.h"
#include "p2Log.h"
#include "j1App.h"
#include "j1Render.h"
#include "j1Textures.h"
#include "j1Fonts.h"
#include "j1Input.h"
#include "j1Gui.h"
#include "UIElement.h"
#include "Label.h"
#include "Image.h"
#include "Interactive.h"
#include "InteractiveImage.h"
#include "InheritedImage.h"
#include "InheritedInteractive.h"
#include "InheritedLabel.h"

j1Gui::j1Gui() : j1Module()
{
	name.create("gui");
}

// Destructor
j1Gui::~j1Gui()
{}

// Called before render is available
bool j1Gui::Awake(pugi::xml_node& conf)
{
	LOG("Loading GUI atlas");
	bool ret = true;

	atlas_file_name = conf.child("WOWatlas").attribute("file").as_string("");
	background = conf.child("background").attribute("file").as_string("");


	return ret;
}

// Called before the first frame
bool j1Gui::Start()
{
	
	atlas = App->tex->Load(atlas_file_name.GetString());
	CreateSceneIntroGUI();

	return true;
}

// Update all guis
bool j1Gui::PreUpdate()
{
	bool ret = true;
	for (p2List_item<UIElement*>* item = elements.start; item; item = item->next)
	{
		item->data->PreUpdate();
		if (!ret)
			break;
	}
	return ret;
}

// Called after all Updates
bool j1Gui::PostUpdate()
{
	bool ret = true;
	for (p2List_item<UIElement*>* item = elements.start; item; item = item->next)
	{
		ret = item->data->PostUpdate();
		
		if (!ret)
			break;
	}
	return ret;
}

bool j1Gui::Draw()
{
	bool ret = true;
	for (p2List_item<UIElement*>* item = elements.start; item; item = item->next)
	{
		item->data->Draw();
		if (!ret)
			break;
	}

	return ret;
}

// Called before quitting
bool j1Gui::CleanUp()
{
	LOG("Freeing GUI");
	for (p2List_item<UIElement*>* item = elements.start; item; item = item->next)
	{
		RELEASE(item->data);
	}
	elements.clear();
	return true;
}

UIElement * j1Gui::AddElement(UIType type, iPoint position, iPoint positionOffset)
{
	UIElement* ret = nullptr;
	switch (type)
	{
	case INTERACTIVE:
		ret = new Interactive(position);
		break;
	case IMAGE:
		ret = new Image();
		break;
	case LABEL:
		ret = new Label();
		break;
	case INTERACTIVE_IMAGE:
		//
		break;
	case INTERACTIVE_LABELLED_IMAGE:
		//
		break;
	case INTERACTIVE_LABEL:
		//
		break;
	case LABELLED_IMAGE:
		//
		break;
	default:
		//
		break;
	}
	
	elements.add(ret);
	return ret;
}

UIElement * j1Gui::AddImage(iPoint position, iPoint positionOffset, SDL_Rect * section)
{
	UIElement* ret = new Image(position, positionOffset, *section);
	elements.add(ret);
	return ret;
}

InheritedInteractive* j1Gui::AddInteractive(iPoint position, iPoint positionOffset, SDL_Rect * size, j1Module* callback)
{
	InheritedInteractive* ret = new InheritedInteractive(position, positionOffset, *size, callback);
	elements.add(ret);

	return ret;
}


InteractiveImage * j1Gui::AddInteractiveImage(iPoint position, iPoint positionOffsetA, iPoint positionOffsetB, SDL_Rect interactiveSection, SDL_Rect image_section, j1Module * callback)
{
	return nullptr;
}





UIElement * j1Gui::DeleteElement(UIElement * element)
{
	int index = elements.find(element);
	p2List_item<UIElement*>* item = nullptr;
	for (item = elements.start; item; item = item->next)
	{
		if (item->data == element)
		{
			break;
		}
	}
	elements.del(item);

	return item->data;
}

UIElement* j1Gui::AddImage_From_otherFile(iPoint position, iPoint positionOffset, p2SString &path)
{

	UIElement* element = new InheritedImage(position, positionOffset, path);

	elements.add(element);
	return element;
}

bool j1Gui::CreateSceneIntroGUI()
{
	AddImage_From_otherFile({ 0,0 }, { 0,0 }, background);
	return true;
}

// const getter for atlas
 SDL_Texture* j1Gui::GetAtlas() const
{
	return atlas;
}

// class Gui ---------------------------------------------------

