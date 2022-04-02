
include_directories(includes)
file(GLOB sources "src/*cpp")
add_library(uiolibs  STATIC ${sources})
