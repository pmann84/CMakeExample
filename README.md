# CMakeExample
An example C++ project using CMake

## Clone
Since this uses submodules, make sure you clone using  
```
git clone <repository name> --recursive
```  
  
if you already have the repository cloned and just want to download any submodules you can then run  
```
git submodule update --init --recursive
```  
  
## Components
- Simple library (single header and cpp file)
- Simple application (uses library)
- Tests (uses gtest)
This example uses git submodules to load in 3rd party libraries.

## Build Instructions
It's usually best to do an "out of source build", so run the following  
```
mkdir _build
cd _build 
cmake ..
```
This will generate the build files (e.g. VS project files etc).

To build everything simply run (from the build directory)
```
cmake --build . --config <platform>
```
where `<platform>` is either `Release` or `Debug`

## Running the Executable
Run the `address_book.exe` executable in the `_build/release` directory.
