# Install script for directory: E:/workspace/reconstruction/Easy3D-main/tutorials

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
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_101_PointCloud/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_102_PointCloud_Property/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_103_PointCloud_IO/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_104_SurfaceMesh/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_105_SurfaceMesh_Connectivity/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_106_SurfaceMesh_Property/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_107_SurfaceMesh_IO/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_108_Graph/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_109_Graph_Connectivity/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_110_Graph_Property/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_111_Graph_IO/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_112_PolyMesh/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_113_PolyMesh_Connectivity/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_114_PolyMesh_Property/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_115_PolyMesh_IO/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_201_Viewer_imgui/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_203_CompositeView/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_204_CameraInterpolation/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_205_RealCamera/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_301_Drawables/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_302_Imposters/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_303_ScalarField/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_304_VectorField/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_305_Texture/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_306_Image/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_307_Tessellator/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_308_TexturedMesh/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_309_TextRendering/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_310_TextMesher/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_311_Animation/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_401_ModelPicker/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_402_FacePicker/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_403_PointSelection/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_501_AmbientOcclusion/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_502_HardShadow/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_503_SoftShadow/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_504_Transparency/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_505_EyeDomeLighting/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_506_DepthMaps/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_601_Cloud_NormalEstimation/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_602_Cloud_SurfaceReconstruction/cmake_install.cmake")
  include("E:/workspace/reconstruction/Easy3D-main/build/tutorials/Tutorial_603_Cloud_PlaneExtraction/cmake_install.cmake")

endif()

