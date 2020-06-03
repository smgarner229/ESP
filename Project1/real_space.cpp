#include <stdio.h>
#include <cmath>
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

  double point_3d::getx()
  {
    return _x;
  }

  double point_3d::gety()
  {
    return _y;
  }

  double point_3d::getz()
  {
    return _z;
  }

  point_3d::~point_3d()
  {
    return;
  }

  double calc_distance(point_3d i,point_3d j)
  {
    return std::pow((std::pow((i.getx()-j.getx()),2.0)
                    +std::pow((i.gety()-j.gety()),2.0)
                    +std::pow((i.getz()-j.getz()),2.0)),0.5);
  }
}
