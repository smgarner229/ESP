CMAKE_MINIMUM_REQUIRED(VERSION 3.14)

PROJECT(ESP)

ADD_EXECUTABLE(CMAKE_RUN main.cpp input_parser.cpp molecule.cpp wfn.cpp)
#ADD_EXECUTABLE(TEST_READ test_lapack.cpp)

FIND_PACKAGE(BLAS REQUIRED)
FIND_PACKAGE(LAPACK REQUIRED)

SET(lapackblas_libraries ${BLAS_LIBRARIES} ${LAPACK_LIBRARIES})

#target_link_libraries(TEST_LP ${lapackblas_libraries})
