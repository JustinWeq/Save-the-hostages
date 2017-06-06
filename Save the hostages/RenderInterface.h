#pragma once
#include <d3d11.h>
#include "Initable.h"
#include "Form.h"
// this class is used for interfacing with D3D 11_0
class RenderInterface : Initable {
	//defualt constructor-- creates a new instance of RenderInterface with defualt parameters
	//form- the form to render on
	//backColor- the back color for rendering
	RenderInterface(Form* form,float backColor[4]);

	//initializes the render interface
	//returns true if nothing went wrong, false otherwise
	virtual bool Init() override;

	//deletes the render interface from memory
	virtual void Delete() override;

	//sets the back color
	//color- the color to set the back color to
	void SetBackColor(float color[4]);

	//returns the back color
	float* GetBackColor();

	//sets the backcolor
	//backColor- the color to set the back to
	void SetBackColor(float backColor[4]);
	//clears the screen in preperation for rendering
	void Clear();
	//presents what is in the back buffer by swapping
	void Present();
private:
	//the d3d device
	ID3D11Device* m_device;
	//the d3d device context
	ID3D11DeviceContext* m_deviceContext;
	//the swap chain to use for rendering
	IDXGISwapChain* m_swapChain;
	//the render target view
	ID3D11RenderTargetView* m_renderTargetView;
	//the depth stencil buffer
	ID3D11Texture2D* m_depthStencilBuffer;
	//the depth stencil state
	ID3D11DepthStencilState* m_depthStencilState;
	//the rasterizer state
	ID3D11RasterizerState* m_rasterizerState;
	//the back color
	float m_backColor[4];
	//the form to render on
	Form* m_form;
	//indicates whther verticalsync is on or not.
	bool m_verticalSync;

};