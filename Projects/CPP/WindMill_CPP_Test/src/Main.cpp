#include <WindMill_CPP_Lib/Lib.h>

#include <iostream>

void main(int argc, char **argv)
{
	LibClass::func();

#ifdef WindMill_CPP_Test_DEBUG
	std::cout << "WindMill_CPP_Test_DEBUG Exists!" << std::endl;
#endif

#ifdef WindMill_CPP_Test_RELEASE
	std::cout << "WindMill_CPP_Test_Release Exists!" << std::endl;
#endif

#ifdef WindMill_CPP_Test_FOO
	std::cout << "WindMill_CPP_Test_FOO Exists!" << std::endl;
#endif
}