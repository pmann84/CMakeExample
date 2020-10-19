cmake_minimum_required(VERSION 3.14)

project(
	CMakeExample
	VERSION 1.0
	DESCRIPTION "Example C++ CMake Project"
	LANGUAGES CXX
)

add_subdirectory(ProjectLib)

add_subdirectory(ProjectApp)
