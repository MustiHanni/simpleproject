cmake_minimum_required(VERSION 3.0)
project(simpleproject)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)

#Introducing OpenMP here is impossible, there is simply too much to say, however, I can help you decide if it’s worth looking into: If you have ever had a long-running loop performing some task and taking forever even though the individual runs of the loop were independent and you wanted to make it run in parallel because your computer has more then one core, then you should look into OpenMP. You can simply add #pragma omp parallel for in front of a for loop and it will make it run in parallel with as many processes as your system supports
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fopenmp -o3")

#We compile all files in the src directory, so all our functionality into one library called Core.
#Add_library(Libname Libfiles…)
#add_library(Core src/file1.cpp src/file2.cpp)

#add_executable(BinaryName main/main.cpp).
add_executable(Main main/main.cpp)
#target_link_libraries(Main Core)
target_link_libraries(Main)

#googletests
#enable_testing()
#set (gtest_force_shared_crt ON CACHE BOOL "MSVC defaults to shared CRT" FORCE)
#add_subdirectory(third_party/googletest)
#include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

#target_compile_definitions(gtest
#  PUBLIC
#    GTEST_LANG_CXX20
#    GTEST_HAS_TR1_TUPLE=0
#)
#target_sources(tests unit_tests/SomeTests.cp)
#add_executable(tests unit_tests/SomeTests.cp)
#set_target_properties(tests PROPERTIES COMPILE_FLAGS "${cxx_strict}")
#target_link_libraries(tests gtest gtest_main Core)
