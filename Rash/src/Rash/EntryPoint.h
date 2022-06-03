#pragma once

#ifdef RASH_PLATFORM_WINDOWS
	extern Rash::Application* Rash::CreateApplication();

	int main(int argc, char** argv)
	{
		auto app = Rash::CreateApplication();
		app->Run();
		delete app;
	}
#endif