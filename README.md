# C++ 20 Learn (Cpp20Learn)

A collection of simple source code examples in C++ 20, featuring key aspects of the language.

## How to build and supported toolchains

The source code is compatible with both GNU C++ v.10+ and CLang v.12+.

### Build with cmake

First download cmake here: https://cmake.org/.

Build CMake environment files in "./cmake" directory:

    cd [Cpp20Learn Directory]
    mkdir cmake
    cd cmake
    cmake ..  

Make the project - you are building both the executable and the tests executable:

    cd cmake    
    cmake --build .  

You will find the executable in "/cmake/out" folder.

### Run

    ./cmake/out/Cpp20Learn

### Tests

Tests are implemented using [Doctest](https://github.com/onqtam/doctest). You may run them with:

    ./cmake/out/Tests





