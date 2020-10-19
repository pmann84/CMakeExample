set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(PROJECT_NAME "TestProjectLib")

add_executable(${PROJECT_NAME})

set(SOURCE_LIST test_project_lib.cpp)

target_sources(
	${PROJECT_NAME}
	PRIVATE
		${SOURCE_LIST}
)

target_link_libraries(${PROJECT_NAME} PRIVATE gtest)
target_link_libraries(${PROJECT_NAME} PRIVATE gtest_main)
target_link_libraries(${PROJECT_NAME} PRIVATE gmock)
target_link_libraries(${PROJECT_NAME} PRIVATE gmock_main)
target_link_libraries(${PROJECT_NAME} PRIVATE ProjectLib)