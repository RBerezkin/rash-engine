#pragma once

#ifdef RASH_PLATFORM_WINDOWS
	#ifdef RASH_BUILD_DLL
		#define RASH_API __declspec(dllexport)
	#else
		#define RASH_API __declspec(dllimport)
	#endif
#else
	#error Rash Engine only supports Windows
#endif