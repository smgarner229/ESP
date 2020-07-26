#ifndef WFN_H
#define WFN_H

#include <iostream>

#include "molecule.h"

namespace esp
{

class wfn: public molecule
    {
        public:
        wfn();
        ~wfn();
    };

}

#endif
