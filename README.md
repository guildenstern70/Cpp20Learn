# C++ 20 Learn (Cpp20Learn)

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

A collection of simple source code examples in C++ 20, featuring key aspects of the language.

This code has been compiled and tested with the following compilers/platforms:

- Apple Clang v12.0 (MacOS BigSur)
- GNU C++ v.11.2 (MacOS BigSur)
- Visual C++ v.16.10 (Win64 with Visual Studio 2019)
- GNU C++ v.11

## How to build and supported toolchains

The source code is compatible with both GNU C++ v.10+ and Clang v.12+.

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

