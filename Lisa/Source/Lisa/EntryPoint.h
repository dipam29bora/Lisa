#pragma once

#ifdef LS_PLATFORM_WINDOWS

extern Lisa::Application* Lisa::CreateApplication();

int main(int arg, char** argv)
{
	auto app = Lisa::CreateApplication();
	app->Run();
	delete app;
}

#endif