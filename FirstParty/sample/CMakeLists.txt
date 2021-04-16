file(GLOB_RECURSE SRC_FILES "src/*.cpp")
file(GLOB_RECURSE HEADER_FILES "include/*.h")

add_library(sample SHARED
${SRC_FILES}
${HEADER_FILES}
)
target_include_directories(sample PUBLIC "include")