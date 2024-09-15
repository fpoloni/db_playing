cmake_minimum_required(VERSION 3.0)

set(REPO_DIR
  ${CMAKE_CURRENT_SOURCE_DIR}/repo/db/
  ${CMAKE_CURRENT_SOURCE_DIR}/repo/tables/
)

# Add all the source files needed to build the executable
add_library(Database
  ${CMAKE_CURRENT_SOURCE_DIR}/repo/db.cpp
)

target_include_directories(Database PUBLIC ${REPO_DIR})
