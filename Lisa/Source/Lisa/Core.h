#pragma once

#ifdef LS_PLATFORM_WINDOWS
	
	#ifdef LS_BUILD_DLL
		#define LISA_API __declspec(dllexport)
	#else
		#define LISA_API __declspec(dllimport)
	#endif
#else
	#error LISA_ONLY_SUPPORT_WINDOWS!

#endif