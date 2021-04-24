add_executable(test_math test.cpp)
target_link_libraries(test_math gtest_main Math)
add_test(test_math test_math)