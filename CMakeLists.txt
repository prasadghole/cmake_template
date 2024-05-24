# CMakeLists.txt (root)
cmake_minimum_required(VERSION 3.10)
project(mytemplateproject)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Unity Test Framework
# include(FetchContent)
# FetchContent_Declare(
# unity
# GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
# GIT_TAG v2.5.2
# )
# FetchContent_MakeAvailable(unity)

# Add subdirectories
add_subdirectory(src)




