cmake_minimum_required(VERSION 3.0.0)
project(XR VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include(CTest)
enable_testing()

add_subdirectory(ThirdParty)
add_subdirectory(FirstParty)