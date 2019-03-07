#pragma once

#include "Core.h"

namespace Lisa {
	class LISA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}