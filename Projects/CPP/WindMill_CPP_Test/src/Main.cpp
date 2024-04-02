#include <WindMill_CPP_Lib/Lib.h>

#include <WindMill_Dll/Lib.h>

#include <iostream>

void main(int argc, char **argv)
{
#if WINDMILL_DLL_OUT_OF_TARGET_EXPORT == 1
	std::cout << "Main: WINDMILL_DLL_OUT_OF_TARGET_EXPORT = 1" << std::endl;
#else
	std::cout << "Main: WINDMILL_DLL_OUT_OF_TARGET_EXPORT = 0" << std::endl;
#endif

	LibClass::func();
	LibClassDll::Dll_Func();
	LibClassDll::Dll_Func_2();
}