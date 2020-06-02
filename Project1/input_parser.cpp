#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "molecule.h"
#include "atom.h"

namespace esp{

void test_open_file(const std::ifstream *myfile, const char ** filename)
{
  if (!*myfile)
  {
    std::cout << "Unable to open input file: " << filename[1] << std::endl << std::endl;
    std::cout << " " << std::endl;
    exit(1);
  }
  else
  {
    return;
  }
}

void read_input(const char ** filename, molecule * temp_molecule)
{
    //Open the file and test to make sure it opens properly
    //std::cout <<"Attempting to open: " << filename[1] <<std::endl;
    std::ifstream myfile(filename[1]);
    test_open_file(&myfile,filename);

    //First get the number of atoms from the input
    int natoms;
    myfile>>natoms;
    //std::cout<<"Number of atoms: " <<natoms<< std::endl;

    //Initialize containers to hold the atoms
    double * read_geom = new double[4];
    //molecule read_molecule;
    atom * temp_atom;
    int counter=natoms;
    while(true)
    {
        myfile>>read_geom[0]>>read_geom[1]>>read_geom[2]>>read_geom[3];
        temp_atom = new atom(read_geom[0],read_geom[1],read_geom[2],read_geom[3]);
        temp_molecule->add_atom(temp_atom);
        counter++;
        if(myfile.eof()||counter==natoms)
          break;
    }
    delete [] read_geom;
    delete temp_atom;
    myfile.close();

    return;
}


}
