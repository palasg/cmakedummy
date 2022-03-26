SET(BINARY ${CMAKE_PROJECT_NAME}_tst)
include_directories(inc)
include_directories("${CMAKE_SOURCE_DIR}/includes")
file(GLOB TEST_SOURCES "src/*.cpp")
add_executable(${BINARY} ${TEST_SOURCES} )
add_test(NAME ${BINARY} COMMAND ${BINARY})
target_link_libraries(${BINARY} PUBLIC 
       uiolibs
       mathlibs
       gtest)
