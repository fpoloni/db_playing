# Minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.0)

set(REPO_DIR
  ${CMAKE_CURRENT_SOURCE_DIR}/
  ${CMAKE_CURRENT_SOURCE_DIR}/../db/repo/
  ${CMAKE_CURRENT_SOURCE_DIR}/../tables/
)

# Add all the source files needed to build the executable
add_executable(
  DBPlaying
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_include_directories(DBPlaying PUBLIC ${REPO_DIR})
target_link_libraries(DBPlaying PUBLIC Database)
