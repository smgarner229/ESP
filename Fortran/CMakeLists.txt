CMAKE_MINIMUM_REQUIRED(VERSION 3.14)

PROJECT(ESP)

enable_language(Fortran)


FIND_PACKAGE(LAPACK REQUIRED)

ADD_EXECUTABLE(test ./forttest.f)


SET(lapack_lib ${LAPACK_LIBRARIES})
target_link_libraries(test ${lapack_lib})


