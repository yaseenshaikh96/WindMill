
add_executable(WindMill_CPP_Test)


file(GLOB_RECURSE WindMill_CPP_Test_target_sources_PRIVATE 
	"${CMAKE_CURRENT_LIST_DIR}/src/*.h" 
	"${CMAKE_CURRENT_LIST_DIR}/src/*.cpp"
)

target_sources(WindMill_CPP_Test
	PRIVATE
	    # "${CMAKE_CURRENT_LIST_DIR}/src/*.h"
		${WindMill_CPP_Test_target_sources_PRIVATE}
)

target_include_directories(WindMill_CPP_Test
  PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}/src/"
)

target_compile_definitions(WindMill_CPP_Test PRIVATE
  $<$<CONFIG:Debug>:WindMill_CPP_Test_DEBUG=1>
  $<$<CONFIG:Release>:WindMill_CPP_Test_RELEASE=2>
  WindMill_CPP_Test_FOO=3
)

# WindMill_CPP_Test depends on WindMill_CPP_Lib
# PRIVATE means that anything that includes WindMill_CPP_Test will not get access to WindMill_CPP_Lib
target_link_libraries(WindMill_CPP_Test PRIVATE WindMill_CPP_Lib)

target_link_libraries(WindMill_CPP_Test PRIVATE WindMill_Dll)

message("Project: WindMill_CPP_Test")