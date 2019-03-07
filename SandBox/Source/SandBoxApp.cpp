#include <Lisa.h>

class SandBox:public Lisa::Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}

private:

};

Lisa::Application* Lisa::CreateApplication()
{
	return new SandBox();
}