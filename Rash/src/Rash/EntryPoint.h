#pragma once

#ifdef RASH_PLATFORM_WINDOWS
	extern Rash::Application* Rash::CreateApplication();

	int main(int argc, char** argv)
	{
		Rash::Log::Init();
		RASH_CORE_WARN("Initialized Log!");
		int a = 1;
		RASH_INFO("Hello! Var={0}", a);

		auto app = Rash::CreateApplication();
		app->Run();
		delete app;
	}
#endif