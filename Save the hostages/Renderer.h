#pragma once
#include "Initable.h"
#include "RenderInterface.h"
// this class is used for rendering the game
class Renderer : Initable {
public:
	//overloaded constructor--creates a new instance of Renderer with defualt parameters
	//renderInterface- the interface to use for rendering.
	Renderer(RenderInterface* renderInterface);

	//initliazes the renderer
	virtual bool Init() override;

	//deletes the renderer
	virtual void Delete() override;

	//renders the game scene
	virtual void Render();
private:
	//the render interface to use for rendering.
	RenderInterface* m_renderInterface;
};