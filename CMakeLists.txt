cmake_minimum_required(VERSION 3.10.0)
project(FuturesDataReceiver VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(databento REQUIRED)
# include(FetchContent)

# FetchContent_Declare(
#   databento
#   GIT_REPOSITORY https://github.com/databento/databento-cpp
#   GIT_TAG HEAD
# )
# FetchContent_MakeAvailable(databento)

add_executable(FuturesDataReceiver main.cpp)
target_link_libraries(FuturesDataReceiver PRIVATE databento::databento)