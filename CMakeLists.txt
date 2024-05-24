# CMakeLists.txt (root)
cmake_minimum_required(VERSION 3.10)
project(mytemplateproject)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMAND ON)



# Unity Test Framework
 include(FetchContent)
 set(UNITY_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/external/Unity" CACHE PATH "Path to Unity source directory")

#Enable testing
enable_testing()

# Add subdirectories
add_subdirectory(${UNITY_SOURCE_DIR})
add_subdirectory(src)





