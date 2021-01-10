cmake_minimum_required(VERSION 3.0)
project(simpleproject)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
#Introducing OpenMP here is impossible, there is simply too much to say, however, I can help you decide if it’s worth looking into: If you have ever had a long-running loop performing some task and taking forever even though the individual runs of the loop were independent and you wanted to make it run in parallel because your computer has more then one core, then you should look into OpenMP. You can simply add #pragma omp parallel for in front of a for loop and it will make it run in parallel with as many processes as your system supports
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fopenmp -o3")
add_library(Core src/foo.cpp) #We compile all files in the src directory, so all our functionality into one library called Core.
add_executable(Main main/main.cpp)
target_link_libraries(Main Core)

if ( TESTS_REQUIRED )
    add_subdirectory(tests)
endif()
