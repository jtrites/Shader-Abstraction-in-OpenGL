#pragma once

#include "VertexBuffer.h"
#include "VertexBufferLayout.h"

class VertexArray
{
	
private:
	unsigned int m_RendererID;

public:
	/* VertexArray constructor */
	VertexArray();

	/* VertexArray ~destructor */
	~VertexArray();

	/* AddBuffer takes in 2 const params:
		1st - VertexBuffer& vb,
		2nd - VertexBufferLayout &, layout */
	void AddBuffer(const VertexBuffer& vb, const VertexBufferLayout& layout);

	/* VertexArray Bind method */
	void Bind() const;

	/* VertexArray Unbind method */
	void Unbind() const;
};

