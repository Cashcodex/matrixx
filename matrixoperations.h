#ifndef matrixoperations_h
#define matrixoperations_h
#include "matrix.h"

/*p-Norm*/
template<class T>
double p_norm(const Matrix<T>& M, int norm);

/*Skalarprodukt*/
template<class T, class M>
M dotproduct(const Matrix<T>& A, const Matrix<T>& B);

template<class T>
Matrix<T> identity_matrix(unsigned n);

#include "matrixoperations.tpp"
#endif