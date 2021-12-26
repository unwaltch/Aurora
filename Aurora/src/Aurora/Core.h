#pragma once

#ifdef ROR_PLATFORM_WINDOWS
	#ifdef ROR_BUILD_DLL
		#define AURORA_API __declspec(dllexport)
	#else
		#define AURORA_API __declspec(dllimport)
	#endif // ROR_BUILD_DLL
#else
	#error Aurora only support windows, sorry >

#endif