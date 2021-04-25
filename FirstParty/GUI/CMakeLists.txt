project(GUI)

file(GLOB_RECURSE SRC_FILES "src/*.cpp")
file(GLOB_RECURSE HEADER_FILES "include/*.h")

add_library(${PROJECT_NAME} SHARED
${SRC_FILES}
${HEADER_FILES}
)
target_link_libraries(${PROJECT_NAME} -lX11)
target_include_directories(${PROJECT_NAME} PUBLIC "include")

add_subdirectory(app)
