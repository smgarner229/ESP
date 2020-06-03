#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <vector>
#include "atom.h"
#include "real_space.h"
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
    printf("\nMolecular geometry:\n");
    for (int i=0; i<_geom.size(); ++i)
    {
      _geom[i].print_position();
    }
  }

  void molecule::calc_bonds_lengths()
  {
    for (int i=0; i<_geom.size(); ++i)
    {
      std::vector<double> temp_bonds;
      for (int j=i+1; j<_geom.size(); ++j)
      {
        temp_bonds.push_back(calc_distance(_geom[i].get_position(),_geom[j].get_position()));
      }
      _bond_lengths.push_back(temp_bonds);
      temp_bonds.clear();
    }
  }

  void molecule::print_bond_lengths()
  {
    printf("\nIntra-atomic distances:\n");
    for (int i=0; i<_bond_lengths.size(); ++i)
    {
      for (int j=0; j<_bond_lengths[i].size(); ++j)
      {
        printf("%4d\t%4d\t%6.8f\n",i,j+i+1,_bond_lengths[i][j]);
      }
    }
    printf("\n");
  }

  void molecule::calc_bond_angles()
  {
    double angle;
    for (int i = 0; i<_geom.size(); ++i)
    {
      for (int j = i+1; j<_geom.size(); ++j)
      {
        for (int k = j+1; k<_geom.size(); ++k)
        {
          std::cout << bond_angle(_geom[i].get_position(),_geom[j].get_position(),_geom[k].get_position()) << std::endl;
        }
      }
    }
  }

  molecule::~molecule()
  {
    std::cout<<"Deleting memory and destroying the molecule"<<std::endl;
  }
}
