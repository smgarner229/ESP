#include "atom.h"

namespace esp
{
  atom::atom(const double Z, const double x, const double y, const double z)
  {
    _charge=Z;
    _x=x;
    _y=y;
    _z=z;
  }
}
