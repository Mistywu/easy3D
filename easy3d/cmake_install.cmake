# Install script for directory: E:/workspace/reconstruction/Easy3D-main/easy3d

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/Easy3D")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("E:/workspace/reconstruction/Easy3D-main/build/easy3d/util/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/easy3d/core/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/easy3d/fileio/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/easy3d/kdtree/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/easy3d/algo/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/easy3d/renderer/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/easy3d/gui/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/easy3d/viewer/cmake_install.cmake")

endif()

