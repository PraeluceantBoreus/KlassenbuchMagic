cmake_minimum_required(VERSION 2.8)
set(QT_MIN_VERSION "5.3.0")

project(libklassenbuchmagic)
set(CMAKE_BUILD_TYPE Release)

find_package(Qt5 ${QT_MIN_VERSION} CONFIG REQUIRED COMPONENTS Core Gui Widgets)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(libklassenbuchmagic SHARED src/main src/klasse.cpp src/klassenbuchseite.cpp)

target_link_libraries(libklassenbuchmagic Qt5::Widgets)
