# src/main/CMakeLists.txt
add_executable(main main.c)
target_link_libraries(main PRIVATE module1 driver1)