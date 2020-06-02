#ifndef ATOM_H
#define ATOM_H

namespace esp
{

class atom {
    double _charge;
    double _x;
    double _y;
    double _z;
  public:
    atom(const double,const double,const double,const double);
};

}

#endif
