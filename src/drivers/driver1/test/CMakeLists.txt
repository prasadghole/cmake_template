#get_target_property(UNITY_INCLUDE_DIR unity INTERFACE_INCLUDE_DIRECTORIES)

add_executable(test_driver1 test_driver1.c)
target_include_directories(test_driver1 PUBLIC ${UNITY_SOURCE_DIR}/src)
target_link_libraries(test_driver1 driver1 unity)

