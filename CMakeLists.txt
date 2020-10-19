cmake_minimum_required(VERSION 3.14)

project(
	CMakeExample
	VERSION 1.0
	DESCRIPTION "Example C++ CMake Project"
	LANGUAGES CXX
)

# Since googletest uses these flags we should too.
SET(CMAKE_CXX_FLAGS_DEBUG "/MTd")
SET(CMAKE_CXX_FLAGS_RELEASE "/MT")

option(PACKAGE_TESTS "Build the tests" ON)
if(PACKAGE_TESTS)
    enable_testing()
    include(GoogleTest)
    add_subdirectory(tests)
endif()

add_subdirectory(ProjectLib)

add_subdirectory(ProjectApp)