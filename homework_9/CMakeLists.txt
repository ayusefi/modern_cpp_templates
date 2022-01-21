cmake_minimum_required(VERSION 3.1)
# Enable C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

project(homework_9)

SET(OpenCV_DIR /home/abdullah/opencv/build/share/OpenCV)

# Include OpenCV
# find_package(TBB REQUIRED tbb)
find_package(OpenCV 3 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(serialize src/compute_sifts.cpp src/serialize.cpp) 

add_library(kmeans src/kmeans_utils.cpp src/kmeans.cpp) 

add_library(bow_dictionary src/bow_dictionary.cpp)
target_link_libraries(bow_dictionary serialize kmeans stdc++fs ${OpenCV_LIBS})

add_library(histogram src/histogram.cpp)
target_link_libraries(histogram tbb stdc++fs ${OpenCV_LIBS})

add_library(convert_dataset src/convert_dataset.cpp src/serialize.cpp src/compute_sifts.cpp) 

target_link_libraries(convert_dataset serialize stdc++fs ${OpenCV_LIBS})

add_executable(main src/main.cpp)
target_link_libraries(main histogram convert_dataset bow_dictionary tbb stdc++fs ${OpenCV_LIBS})