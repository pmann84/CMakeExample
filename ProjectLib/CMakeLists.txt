set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(PROJECT_NAME "ProjectLib")
set(HEADER_LIST "lib.h")

add_library(${PROJECT_NAME})

target_sources(
	${PROJECT_NAME}
	PRIVATE
		lib.cpp
	PUBLIC
		${HEADER_LIST}
)

# This tells applications that use this
# library what the include directory is
target_include_directories(
	${PROJECT_NAME}
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
)