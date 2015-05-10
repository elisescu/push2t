cmake_minimum_required(VERSION 3.0)

project(push2talk)


set(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${ROOT_DIR}/deps/out/include)
link_directories(${ROOT_DIR}/deps/out/lib)

add_subdirectory(src)
add_subdirectory(deps)
