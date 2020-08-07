CMAKE_MINIMUM_REQUIRED(VERSION 3.14)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

PROJECT(ESP)

ADD_EXECUTABLE(TEST_LP test_lapack.cpp)


set(HAVE_MACOS_CBLAS FALSE)
if(APPLE)
    set(BLA_VENDOR Apple)
    FIND_PACKAGE(BLAS REQUIRED)
    FIND_PACKAGE(LAPACK REQUIRED)
    find_package(BLAS)
    find_path(MACOS_BLAS_HEADER_DIR Accelerate.h
              PATHS ${BLAS_LIBRARIES}/Headers
              NO_DEFAULT_PATH
             )
endif()

SET(lapackblas_libraries ${BLAS_LIBRARIES} ${LAPACK_LIBRARIES})

target_link_libraries(TEST_LP ${lapackblas_libraries})
