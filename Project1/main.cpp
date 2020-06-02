#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include "input_parser.h"
#include "molecule.h"

int main(const int argc,const char ** argv)
{
  esp::molecule master_molecule;
  esp::read_input( argv , & master_molecule);
  master_molecule.print_geomery();
  return 0;
}
