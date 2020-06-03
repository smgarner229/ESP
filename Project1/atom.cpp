#include <stdio.h>
#include "atom.h"

namespace esp
{
  atom::atom(const double Z, const double x, const double y, const double z)
  {
    _charge=Z;
    _position.set_position(x,y,z);
  }

  point_3d atom::get_position()
  {
    return _position;
  }

  void atom::print_position()
  {
    printf("%2.4f\t",_charge);
    _position.print_position();
  }
}
