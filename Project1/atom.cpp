#include <stdio.h>
#include "atom.h"

namespace esp
{
  atom::atom(const double Z, const double x, const double y, const double z)
  {
    _charge=Z;
    _position.set_position(x,y,z);
  }

  void atom::print_position()
  {
    //printf("%2.4f\t%12.8f\t%12.8f\t%12.8f\n",_charge,_x,_y,_z);
    printf("%2.4f\t",_charge);
    _position.print_position();
  }
}
