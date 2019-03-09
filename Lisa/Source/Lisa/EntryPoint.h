#pragma once

#ifdef LS_PLATFORM_WINDOWS

extern Lisa::Application* Lisa::CreateApplication();

int main(int arg, char** argv)
{
	Lisa::Log::Init();
	char n = 't';
	LISA_INFO("Info msg {0}", n);

	auto app = Lisa::CreateApplication();
	app->Run();
	delete app;
}

#endif