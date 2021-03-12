add_executable(test_hello hello_test.cpp)
target_link_libraries(test_hello gtest_main sample)
add_test(test_hello test_hello)