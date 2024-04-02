cmake_minimum_required(VERSION 3.27.0-rc5)

# CMAKE_CONFIGURATION_TYPES Debug, Release
# CMAKE_BUILD_TYPE Debug

# set(CMAKE_CONFIGURATION_TYPES "Debug;Release")

project(WindMill)

enable_language(CXX)

include("Projects/CPP/WindMill_CPP_Lib/CMakeLists.txt")
include("Projects/CPP/WindMill_dLL/CMakeLists.txt")

include("Projects/CPP/WindMill_CPP_Test/CMakeLists.txt")