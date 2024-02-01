#pragma once

#include "VertexArray.h"
#include <glm/glm.hpp>

namespace Viper {

	class RendererAPI
	{
	public:
		enum class API { None = 0, OpenGL = 1 };
	public:
		virtual void SetClearColor(glm::vec4& color) = 0;
		virtual void Clear() = 0;
		virtual void DrawIndexed(const Shared<VertexArray>& vertexArray) = 0;
		inline static API GetAPI() { return s_API; }
	private:
		static API s_API;
	};

}