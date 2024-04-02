#include "WindMill_Dll/Lib.h"

#include <iostream>

void LibClassDll::Dll_Func()
{
	std::cout << "Hello from Dll!" << std::endl;
}

void LibClassDll::Dll_Func_2()
{
	std::cout << "I am Dll_func_2, I Call Dll_Func" << std::endl;
	LibClassDll::Dll_Func();

#if WINDMILL_DLL_OUT_OF_TARGET_EXPORT == 1
	std::cout << "Dll: WINDMILL_DLL_OUT_OF_TARGET_EXPORT = 1" << std::endl;
#else
	std::cout << "Dll: WINDMILL_DLL_OUT_OF_TARGET_EXPORT = 0" << std::endl;
#endif
}