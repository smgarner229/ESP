#ifndef ATOM_H
#define ATOM_H

#include "real_space.h"

namespace esp
{

class atom {
    friend class real_space;
    double _charge;
    double _mass;
    point_3d _position;
  public:
    atom(const double,const double,const double,const double);
    point_3d get_position();
    void print_position();
};

}

#endif
