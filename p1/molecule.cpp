#include <stdlib.h>
#include "molecule.h"
#include <iostream>
#include <vector>
#include <cmath>


namespace esp
{

    double calc_atom_distance(atom * from, atom * to)
    {
        return std::pow(
                std::pow(from->x-to->x,2.0)+
                std::pow(from->y-to->y,2.0)+
                std::pow(from->z-to->z,2.0),0.5);
    }

    double dot_product(atom * i, atom * j)
    {
       return 0.0; 
    }

    double calc_3_center_angle(atom * i, atom * j, atom * k)
    {
        return (180.0/std::acos(-1.0))*std::acos((
               (i->x-j->x)*(k->x-j->x)+
               (i->y-j->y)*(k->y-j->y)+
               (i->z-j->z)*(k->z-j->z))
                /(calc_atom_distance(i,j)*calc_atom_distance(j,k))
                );
    }

    molecule::molecule()
    {
        std::cout<<"Building the molecule."<<std::endl;
    }

    void molecule::add_atom(atom atom_added)
    {
        _geom.push_back(atom_added);
    }

    int molecule::get_natoms()
    {
        return _geom.size();
    }

    void molecule::print_geom()
    {
        if(_geom.size()==0)
        {
            std::cout<<std::endl<<"No geometry initialized"<<std::endl;
            return;
        }
        else
        {
            std::cout<<std::endl<<"Geometry: "<<std::endl;
            for (int i=0;i<_geom.size();i++)
            {
                std::cout<<_geom[i].Z<<" "<<_geom[i].x<<" "<<_geom[i].y<<" "<<_geom[i].z<<std::endl;
            }
            std::cout<<std::endl;
        }
        set_lengths();
        set_3_angles();
    }
   
    void molecule::set_lengths()
    {
        _atom_dist.clear();
        if(_geom.size()<2)
        {
            std::cout<<"Not enough atoms detected to calculate interatomic distances"<<std::endl;
            return;
        }
        else
        {
            atom_distance * temp_length;
            temp_length = new atom_distance;
            for(int i=0; i<_geom.size();i++)
            {
                for(int j=i+1;j<_geom.size();j++)
                {
                   temp_length->from=&_geom[i]; 
                   temp_length->to=&_geom[j];
                   temp_length->length=calc_atom_distance(&_geom[i],&_geom[j]);
                   _atom_dist.push_back(*temp_length);
                }
            }
            delete temp_length;
        }
        print_lengths();
    }

    void molecule::print_lengths()
    {
        if(_atom_dist.size()<1)
        {
            std::cout<<"No bonds to print"<<std::endl; 
            return;
        }
        else
        {
            for (int i=0;i<_atom_dist.size();i++)
            {
                std::cout<<_atom_dist[i].from->Z<<" "<<_atom_dist[i].to->Z<<" "<<_atom_dist[i].length<<std::endl;
            }
        }
    }

    void molecule::set_3_angles()
    {
        if(get_natoms()<3)
        {
            std::cout<<"Not enough atoms to calculate 3-center angles"<<std::endl; 
            return;
        }
        else
        {
            three_center_angle * temp_3a;
            temp_3a = new three_center_angle;
            for(int i=0; i<_geom.size();i++)
            {
                for(int j=i+1;j<_geom.size();j++)
                {
                    for(int k=j+1;k<_geom.size();k++)
                    {
                       if (calc_atom_distance(&_geom[i],&_geom[j])<4.0&&calc_atom_distance(&_geom[j],&_geom[k])<4.0)
                       {
                           std::cout<<i<< " " << j << " " << k << std::endl;
                           temp_3a->i=&_geom[i]; 
                           temp_3a->j=&_geom[j];
                           temp_3a->k=&_geom[k];
                           temp_3a->angle=calc_3_center_angle(&_geom[i],&_geom[j],&_geom[k]);
                           _3_angles.push_back(*temp_3a);
                       }
                    }
                }
            }
            delete temp_3a;
        }
        print_3_angles();
    }

    void molecule::print_3_angles()
    {
        if(_3_angles.size()<1)
        {
            std::cout<<"No angles to print"<<std::endl; 
            return;
        }
        else
        {
            std::cout<<std::endl<<"i j k angles"<<std::endl;
            for (int i=0;i<_3_angles.size();i++)
            {
                std::cout<<_3_angles[i].i->Z<<" "<<_3_angles[i].j->Z<<" "<<_3_angles[i].k->Z<<" "<<_3_angles[i].angle<<std::endl;
            }
            std::cout<<std::endl;
        }

    }

    molecule::~molecule()
    {
        std::cout<<"Destroying the molecule."<<std::endl;
    }
}
