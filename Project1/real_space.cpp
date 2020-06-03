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

  vector_3d::vector_3d(point_3d i, point_3d j)
  {
    _ex=-(i.getx()-j.getx())/calc_distance(i,j);
    _ey=-(i.gety()-j.gety())/calc_distance(i,j);
    _ez=-(i.getz()-j.getz())/calc_distance(i,j);
  }

  double vector_3d::getex()
  {
    return _ex;
  }

  double vector_3d::getey()
  {
    return _ey;
  }

  double vector_3d::getez()
  {
    return _ez;
  }

  vector_3d::~vector_3d()
  {
    return;
  }

  double calc_distance(point_3d i,point_3d j)
  {
    return std::pow((std::pow((i.getx()-j.getx()),2.0)
                    +std::pow((i.gety()-j.gety()),2.0)
                    +std::pow((i.getz()-j.getz()),2.0)),0.5);
  }

  double dot_prodcut(vector_3d a,vector_3d b)
  {
    return a.getex()*b.getex()+a.getey()*b.getey()+a.getez()*b.getez();
  }

  double bond_angle(point_3d i, point_3d j, point_3d k)
  {
    vector_3d * ij;
    vector_3d * jk;
    ij = new vector_3d(i,j);
    jk = new vector_3d(k,j);
    return (180.0/std::acos(-1.0))*std::acos(dot_prodcut(*ij,*jk));
    delete ij;
    delete jk;
  }

}
