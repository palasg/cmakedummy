cmake_minimum_required(VERSION 3.16)

project(dummyCMake)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

#set(CMAKE_CXX_FLAGS_DEBUG "-g -o0")

if(NOT CMAKE_BUILD_TYPE)
set(CMAKE_BUILD_TYPE "Release")
endif()

set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -Wextra")

set(CMAKE_CXX_FLAGS_RELEASE "-o3")

add_subdirectory(libs)
add_subdirectory(test)

include_directories(includes)

file(GLOB SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

link_directories(${CMAKE_SOURCE_DIR}/lib)

target_link_libraries(${PROJECT_NAME} PUBLIC uiolibs)

target_link_libraries(${PROJECT_NAME} PUBLIC mathlibs)

target_include_directories(${PROJECT_NAME} PUBLIC
"${PROJECT_BINARY_DIR}"
"${PROJECT_SOURCE_DIR}/libs/uiolibs/includes"
"${PROJECT_SOURCE_DIR}/libs/mathlibs/includes"
)


