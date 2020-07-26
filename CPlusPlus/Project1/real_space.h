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

class vector_3d
  {
    double _ex;
    double _ey;
    double _ez;
  public:
    vector_3d(point_3d,point_3d);
    double getex();
    double getey();
    double getez();
    ~vector_3d();
  };

  double calc_distance(point_3d,point_3d);
  double dot_prodcut(vector_3d,vector_3d);
  //vector_3d cross_product(vector_3d,vector_3d);
  double angle_3points(point_3d,point_3d,point_3d);

}


#endif
