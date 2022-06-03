#include <Rash.h>

class Sandbox : public Rash::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

Rash::Application* Rash::CreateApplication()
{
	return new Sandbox();
}