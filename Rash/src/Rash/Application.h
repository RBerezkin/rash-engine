#pragma once

#include "Core.h"

namespace Rash {

	class RASH_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
