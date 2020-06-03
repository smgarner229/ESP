#include <fstream>
#include <stdlib.h>
#include "molecule.h"
#include "atom.h"

namespace esp{
  //Right now just reading geometry, but in the future
  //will add functinality to read a combined
  // geometry + input options file
  void read_input(const char ** filename, molecule * temp_molecule);
}
