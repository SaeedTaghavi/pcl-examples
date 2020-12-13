#include<iostream>
// #include <pcl/io/pcd_io.h>
/* by looking at the PCL 1.6 source code,
 it looks like the savePolygonFileSTL function
  is defined in the vtk_lib_io.h header. 
*/
#include <pcl/io/vtk_lib_io.h>

int
  main (int argc, char** argv)
{
  pcl::PolygonMesh myMesh;
  pcl::io::loadPolygonFileSTL("sample-man.stl",myMesh);

  pcl::io::savePolygonFileSTL("new-sample-man.stl",myMesh);

  std::cout<<"injam"<<std::endl;

  return (0);
}
