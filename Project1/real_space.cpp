#include <stdio.h>
#include "real_space.h"

namespace esp{

  point_3d::point_3d()
  {
    return;
  }

  void point_3d::set_position(double x,double y, double z)
  {
    _x=x;
    _y=y;
    _z=z;
    return;
  }

  void point_3d::print_position()
  {
    printf("%12.8f\t%12.8f\t%12.8f\n",_x,_y,_z);
    return;
  }

  point_3d::~point_3d()
  {
    return; 
  }

}
