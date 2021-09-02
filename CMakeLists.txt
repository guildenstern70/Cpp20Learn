cmake_minimum_required(VERSION 3.20)
project(Cpp20Learn)

set(CMAKE_CXX_STANDARD 20)
set(OUTPUT_DIR "out")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})

add_executable(Cpp20Learn
               src/main.cpp
               src/arrayloops.cpp
               src/arrayloops.h
               src/pointersreferences.cpp
               src/pointersreferences.h
               src/utilities.cpp
               src/utilities.h)

add_executable(Tests
               src/arrayloops.cpp
               src/arrayloops.h
               src/pointersreferences.cpp
               src/pointersreferences.h
               src/utilities.cpp
               src/utilities.h
               src/arrayloops_test.cpp)
