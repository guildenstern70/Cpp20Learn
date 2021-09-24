cmake_minimum_required(VERSION 3.19)
project(Cpp20Learn)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(OUTPUT_DIR "out")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})

add_executable(Cpp20Learn
               src/main.cpp)

add_executable(Tests
               src/all_tests.cpp)

add_library(Cpp20LearnLib STATIC
            src/arrayloops.cpp
            src/arrayloops.h
            src/pointersreferences.cpp
            src/pointersreferences.h
            src/utilities.cpp
            src/utilities.h
            src/functions.cpp
            src/functions.h
            src/optional.cpp
            src/optional.h
            src/templates.cpp
            src/templates.h src/classes.cpp src/classes.h)

find_library(Cpp20LearnLib lib)
target_link_libraries(Cpp20Learn LINK_PUBLIC Cpp20LearnLib)
target_link_libraries(Tests LINK_PUBLIC Cpp20LearnLib)


