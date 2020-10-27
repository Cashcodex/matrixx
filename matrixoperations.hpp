//
//  matrixoperations.hpp
//  matrixx
//
//  Created by Kashef Karim on 19.09.17.
//  Copyright © 2017 Kashef Karim. All rights reserved.
//

#ifndef matrixoperations_hpp
#define matrixoperations_hpp

#include <stdio.h>

#ifndef matrixoperations_h
#define matrixoperations_h
#include "matrix.hpp"

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

#endif /* matrixoperations_hpp */

