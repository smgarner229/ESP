#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include "atom.h"
#include "molecule.h"

namespace esp
{
  molecule::molecule()
  {
    std::cout<<"A molecule has been created with no geometry"<<std::endl;
  }

  void molecule::add_atom(const atom * temp_atom)
  {
    _geom.push_back(* temp_atom);
  }

  void molecule::print_geomery()
  {
    std::cout << "Molecular geometry: " << std::endl;
    for (int i=0; i<_geom.size(); ++i)
    {
      _geom[i].print_position();
    }
  }

  molecule::~molecule()
  {
    std::cout<<"Deleting memory and destroying the molecule"<<std::endl;
  }
}
