#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "molecule.h"

namespace esp{

void read_input(char** filename, molecule* temp_mol)
{
//    molecule temp_mol(0);
    std::ifstream myfile(filename[1]);
    if(!myfile){
      std::cout << "Unable to open input file: " << filename[1] << std::endl << std::endl;
      std::cout << " " << std::endl;
      exit(1);
    }
    int natoms;
    atom * temp_atom;
    temp_atom=new atom;
    if(myfile.is_open())
    {
        myfile>>natoms;
        std::cout<<"Number of atoms: " <<natoms<< std::endl;
        while(true)
        {
            myfile>>temp_atom->Z>>temp_atom->x>>temp_atom->y>>temp_atom->z;
            temp_mol->add_atom(*temp_atom); 
            if(myfile.eof()||temp_mol->get_natoms()==natoms) break;
        }
    }
    delete temp_atom;
    myfile.close();
}

}
