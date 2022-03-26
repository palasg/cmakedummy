
include_directories(includes)
file(GLOB sources "src/*cpp")
message(${sources})
add_library(uiolibs  STATIC ${sources})
