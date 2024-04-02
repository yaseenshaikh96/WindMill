
#pragma once

#if WINDMILL_DLL_OUT_OF_TARGET_EXPORT == 1
#define WINDMILL_DLL_EXPORT __declspec(dllimport)
#else
#define WINDMILL_DLL_EXPORT __declspec(dllexport)
#endif