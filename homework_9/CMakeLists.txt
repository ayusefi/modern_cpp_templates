cmake_minimum_required(VERSION 3.1)
# Enable C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

project(homework_9)

SET(OpenCV_DIR /home/abdullah/opencv/build/share/OpenCV)

# Include OpenCV
find_package(TBB REQUIRED tbb)
find_package(OpenCV 3 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

include_directories(${PROJECT_SOURCE_DIR}/include)
# add_library(histogram src/histogram.cpp)
# target_link_libraries(histogram )

add_library(serialize src/compute_sifts.cpp src/serialize.cpp) 
target_link_libraries(serialize tbb)


add_library(bow_dictionary src/bow_dictionary.cpp)
target_link_libraries(bow_dictionary tbb serialize kmeans stdc++fs ${OpenCV_LIBS})



add_library(convert_dataset src/convert_dataset.cpp src/serialize.cpp src/compute_sifts.cpp) 

target_link_libraries(convert_dataset serialize stdc++fs ${OpenCV_LIBS})

add_library(kmeans src/kmeans.cpp src/kmeans_utils.cpp ) 



add_executable(main src/main.cpp)
target_link_libraries(main tbb convert_dataset bow_dictionary stdc++fs ${OpenCV_LIBS})