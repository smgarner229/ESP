CMAKE_MINIMUM_REQUIRED(VERSION 3.14)

PROJECT(ESP)

ADD_EXECUTABLE(P1 ./Project1/main.cpp ./Project1/molecule.cpp ./Project1/input_parser.cpp ./Project1/atom.cpp ./Project1/real_space.cpp)

#ADD_EXECUTABLE(CMAKE_RUN ./p1/main.cpp ./p1/input_parser.cpp ./p1/molecule.cpp ./p1/wfn.cpp)
#ADD_EXECUTABLE(TEST_READ test_lapack.cpp)

#FIND_PACKAGE(BLAS REQUIRED)
#FIND_PACKAGE(LAPACK REQUIRED)

#SET(lapackblas_libraries ${BLAS_LIBRARIES} ${LAPACK_LIBRARIES})

#target_link_libraries(TEST_LP ${lapackblas_libraries})
