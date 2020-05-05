#ifndef MOLECULE_H
#define MOLECULE_H

#include <vector>
#include <cmath>

namespace esp
{

struct atom{
    double Z;
    double x,y,z;
};

template <T>

struct 3_vector{
    double x,y,z; 
};

struct atom_distance{
    atom * to;
    atom * from;
    double length;
};

struct three_center_angle{
    atom *i,*j,*k;
    double angle;
};

double calc_atom_distance(atom *, atom *);
double calc_3_center_angle(atom *, atom *, atom *);

class molecule{
    private:
    std::vector<atom> _geom;
    std::vector<atom_distance> _atom_dist;
    std::vector<three_center_angle> _3_angles;
    public:
    molecule();
    void add_atom(atom added);
    int get_natoms();
    void print_geom();
    void set_lengths();
    void print_lengths();
    void set_3_angles();
    void print_3_angles();
    ~molecule();
};

}

#endif
