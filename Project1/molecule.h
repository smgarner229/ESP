#ifndef MOLECULE_H
#define MOLECULE_H

#include <vector>
#include "atom.h"

namespace esp{

class molecule
{
  friend class atom;
  std::vector<atom> _geom;
  std::vector<std::vector<double>> _bond_lengths;

public:
  molecule();
  void add_atom(const atom * temp_atom);
  void print_geomery();
  void calc_bonds_lengths();
  ~molecule();
};

}
#endif
