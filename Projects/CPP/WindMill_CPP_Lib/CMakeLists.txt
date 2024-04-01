
add_library(WindMill_CPP_Lib)

# set(WindMill_CPP_Lib_cwd ${CMAKE_CURRENT_LIST_DIR})

file(GLOB_RECURSE WindMill_CPP_Lib_target_sources_PUBLIC 
	"${CMAKE_CURRENT_LIST_DIR}/include/WindMill_CPP_Lib/*.h" 
	"${CMAKE_CURRENT_LIST_DIR}/include/WindMill_CPP_Lib/*.cpp"
)
file(GLOB_RECURSE WindMill_CPP_Lib_target_sources_PRIVATE 
	"${CMAKE_CURRENT_LIST_DIR}/src/*.h" 
	"${CMAKE_CURRENT_LIST_DIR}/src/*.cpp"
)

target_sources(WindMill_CPP_Lib
  	PUBLIC
		${WindMill_CPP_Lib_target_sources_PUBLIC}

	PRIVATE
		${WindMill_CPP_Lib_target_sources_PRIVATE}
)

target_include_directories(WindMill_CPP_Lib
	PUBLIC
    	"${CMAKE_CURRENT_LIST_DIR}/include/"
    	"${CMAKE_CURRENT_LIST_DIR}/src/"
)


message("Project: WindMill_CPP_Lib")