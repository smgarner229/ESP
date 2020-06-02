#ifndef MOLECULE_H
#define MOLECULE_H

#include <vector>
#include "atom.h"

namespace esp{

class molecule
{
  friend class atom;
  std::vector<atom> _geom;

public:
  molecule();
  void add_atom(const atom * temp_atom);
  void print_geomery();
  ~molecule();
};

}
#endif
