#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include "input_parser.h"
#include "molecule.h"
#include "wfn.h"

int main(int argc,char** argv)
{
    esp::wfn wavefunction;
    esp::molecule mol();
    esp::read_input(argv,&wavefunction);
//    esp::molecule mol(0);
    wavefunction.print_geom();
}
