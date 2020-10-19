cmake_minimum_required(VERSION 3.14)

project(
	CMakeExample
	VERSION 1.0
	DESCRIPTION "Example C++ CMake Project"
	LANGUAGES CXX
)

# Disable the ZERO_CHECK project generation
set(CMAKE_SUPPRESS_REGENERATION true)

# Since googletest uses these flags we should too.
SET(CMAKE_CXX_FLAGS_DEBUG "/MTd")
SET(CMAKE_CXX_FLAGS_RELEASE "/MT")

# Set output directory of all projects to be somewhere sensible
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

option(PACKAGE_TESTS "Build the tests" ON)
if(PACKAGE_TESTS)
    add_subdirectory(tests)
endif()

add_subdirectory(ProjectLib)

add_subdirectory(ProjectApp)