
include_directories(includes)
file(GLOB sources "src/*cpp")
add_library(mathlibs STATIC ${sources})
