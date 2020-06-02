#include <stdlib.h>
#include "atom.h"
#include "molecule.h"
#include <iostream>


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

  molecule::~molecule()
  {
    std::cout<<"Deleting memory and destroying the molecule"<<std::endl;
  }
}
