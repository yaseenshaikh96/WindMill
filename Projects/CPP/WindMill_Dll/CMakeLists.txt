
add_library(WindMill_Dll SHARED)

# set(WindMill_Dll_cwd ${CMAKE_CURRENT_LIST_DIR})

file(GLOB_RECURSE WindMill_Dll_target_sources_PUBLIC 
	"${CMAKE_CURRENT_LIST_DIR}/include/WindMill_Dll/*.h" 
	"${CMAKE_CURRENT_LIST_DIR}/include/WindMill_Dll/*.cpp"
)
file(GLOB_RECURSE WindMill_Dll_target_sources_PRIVATE 
	"${CMAKE_CURRENT_LIST_DIR}/src/*.h" 
	"${CMAKE_CURRENT_LIST_DIR}/src/*.cpp"
)

target_sources(WindMill_Dll
  	PUBLIC
		${WindMill_Dll_target_sources_PUBLIC}

	PRIVATE
		${WindMill_Dll_target_sources_PRIVATE}
)

target_include_directories(WindMill_Dll
	PUBLIC
    	"${CMAKE_CURRENT_LIST_DIR}/include/"
    	"${CMAKE_CURRENT_LIST_DIR}/src/"
)

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
	message("CLANG NOT SUPPROTED! ONLY MSVC!")

elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	message("GNU NOT SUPPROTED! ONLY MSVC!")

elseif (CMAKE_CXX_COMPILER_ID STREQUAL "Intel")
	message("Intel NOT SUPPROTED! ONLY MSVC!")

elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
	target_compile_definitions(WindMill_Dll 
		PUBLIC
			WINDMILL_DLL_OUT_OF_TARGET_EXPORT=1
		PRIVATE
			WINDMILL_DLL_OUT_OF_TARGET_EXPORT=0
)
endif()



message("Project: WindMill_Dll")