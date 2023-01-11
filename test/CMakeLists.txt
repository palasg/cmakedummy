enable_testing()
include(CTest)


SET(BINARY ${CMAKE_PROJECT_NAME}_test)
include_directories(inc/)
include_directories("${CMAKE_SOURCE_DIR}/includes"
"${CMAKE_SOURCE_DIR}/libs/mathlibs/includes")
file(GLOB TEST_SOURCES "src/*.cpp")
message(${TEST_SOURCES})
add_executable(${BINARY} ${TEST_SOURCES} ${PROJECT_SOURCE_DIR}/src/CalcProcess.cpp)
#add_test(NAME ${BINARY} COMMAND ${BINARY})
target_link_libraries(${BINARY} PUBLIC 
       uiolibs
       mathlibs
       GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(${CMAKE_PROJECT_NAME}_test)
