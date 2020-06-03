#ifndef REAL_SPACE_H
#define REAL_SPACE_H

namespace esp{

  class point_3d
  {
    double _x;
    double _y;
    double _z;
  public:
    point_3d();
    void set_position(double,double,double);
    void print_position();
    double getx();
    double gety();
    double getz();
    ~point_3d();
  };

  double calc_distance(point_3d,point_3d);

}


#endif
