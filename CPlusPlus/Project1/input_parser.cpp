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
    std::ifstream myfile(filename[1]);
    test_open_file(&myfile,filename);

    //First get the number of atoms from the input
    int natoms;
    myfile>>natoms;

    //Initialize containers to hold read in values
    double * read_geom = new double[4];
    atom * temp_atom;
    //Temporary way to hold the number of atoms read in
    int * counter = new int;
    *counter=0;

    while(true)
    {
        if(myfile.eof()||(*counter)==natoms)
          break;
        myfile>>read_geom[0]>>read_geom[1]>>read_geom[2]>>read_geom[3];
        temp_atom = new atom(read_geom[0],read_geom[1],read_geom[2],read_geom[3]);
        temp_molecule->add_atom(temp_atom);
        (*counter)++;
    }

    //Free memeory from contaiers holding read values
    delete [] read_geom;
    delete temp_atom;
    delete counter;

    //Close the input file
    myfile.close();

    return;
}


}
