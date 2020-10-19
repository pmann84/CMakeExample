set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(PROJECT_NAME "ProjectApp")

add_executable(${PROJECT_NAME})

set(SOURCE_LIST "main.cpp")

target_sources(
	${PROJECT_NAME}
	PRIVATE
		${SOURCE_LIST}
)

target_link_libraries(${PROJECT_NAME} PRIVATE ProjectLib)