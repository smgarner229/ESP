# Electronic Structure Project

This project is a tool for learning the fundamentals of electronic structure
theory and it's implimentation on modern computing machines.  For the most part,
it follows the directions from the Crawford group electronic structure
programming projects [github
directory](https://github.com/CrawfordGroup/ProgrammingProjects).


This project is going to be done in three languages: Python, C++, and Fortran.
The idea is to first blaze through with a Python implimentation, which 


## Python
These will be done in Google Colab notebooks.  These are Googles implimentations
of Jupyter notebook environments.  They allow integration of the Google drive
and maybe eventually will be more integrated with an iPadOS framework.  There's
really no good way to run code natively on Apple's ARM processcors on iOS /
iPadOS as of July 2020, but I would guess that changes incredibly soon upon
Apple's announcement of moving away from Intel.

## C++
This is a C++ implimentation of the projects.  This was the original intent of
the projects (althought perhaps somewhere on the border of C and C++), but this
is a bit more involved than Python.  I am at this point in time not an efficient
enough C programmer to make this implimentation at the quick and dirty level of
Python, but translation shouldn't be too hard. 

The C based implimentation also allows the use of new tools, at least to me.
To namedrop a few, the main tools (and thus required packages if you'd like to
build this yourself) are
* CMake
* BLAS
* LAPACK

## FORTRAN
There is value in understanding the FORTRAN language.  Many legacy codes as well
as current codes, rely on FORTRAN backbones for heavy duty computation where
efficiency and memory management is vital.  For example, of the libraries listed
in the *C++* section, to my knowledge at least BLAS and LAPACK are primarily
written in FORTRAN.

This is the most tedious language to work in, with perhaps minimal to no gains
over a *C* version, but nevertheless the tools and algorithms used are different
enough I see it worth pursuing.
