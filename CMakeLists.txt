# CMakeLists.txt (root)
cmake_minimum_required(VERSION 3.10)
project(mytemplateproject)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

#Enable testing
enable_testing()

# Unity Test Framework
 include(FetchContent)
 set(UNITY_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/external/Unity" CACHE PATH "Path to Unity source directory")
 FetchContent_Declare(
 unity
 GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
 GIT_TAG v2.5.2
 SOURCE_DIR "${UNITY_SOURCE_DIR}"
 )
 FetchContent_MakeAvailable(unity)


# Add subdirectories
add_subdirectory(src)




