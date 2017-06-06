#pragma once
#include <d3d11.h>
#include "Initable.h"
#include "Sizeable.h"
//This class is used to u=hold data for a texture that is to be drawn
class Texture : Initable, Sizeable{
public:
	//overloaded constructor-- creates a new instance of Texture with overloaded parameters
	//filepath- the path to the textures file
	Texture(const char* filepath = NULL);
	//returns the shader resource view for the texture
	ID3D11ShaderResourceView* GetShaderResourceView();
	//used to init the texture
    virtual bool Init() override;
	//used to delete the texture
	virtual void Delete() override;
private:
	//the texture
	ID3D11ShaderResourceView* m_texture;
};