//
//  matrix.hpp
//  matrixx
//
//  Created by Kashef Karim on 19.09.17.
//  Copyright © 2017 Kashef Karim. All rights reserved.
//

#ifndef matrix_hpp
#define matrix_hpp

#include <stdio.h>

#endif /* matrix_hpp */

#ifndef matrix_h
#define matrix_h

#include <vector>
#include <exception>


template<class T>
class Matrix{
private:
    std::vector<std::vector<T>> M; //Matrix
    unsigned int rows;
    unsigned int columns;
    
public:
    Matrix(unsigned int rows, unsigned int columns);
    Matrix(unsigned int rows, unsigned int columns, T value);
    Matrix(std::initializer_list<std::initializer_list<T>> il);
    
    //Copy-Constructor
    Matrix<T>(const Matrix<T>& B);
    
    virtual ~Matrix(); //virtual, damit abgeleitete Klassen sich mit eigenem Konstruktor lˆschen lassen
    
    /*Matrix<double> cast*/
    operator Matrix<double>();
    
    void fillMatrix(unsigned int _rows, unsigned int columns, T value);
    void fillMatrix(T value);
    //Operator overloading
    
    
    Matrix<T>& operator=(const Matrix<T>& B);
    
    Matrix<T> operator+(const Matrix<T>& B);
    Matrix<T>& operator +=(const Matrix<T>& B);
    Matrix<T> operator-(const Matrix<T>& B);
    Matrix<T>& operator -=(const Matrix<T>& B);
    
    /* Matrix zu Matrix Multiplikation*/
    Matrix<T> operator*(const Matrix<T>& B); //Matrix*Matrix
    Matrix<T>& operator*=(const Matrix<T>& B);//Matrix*Matrix
    Matrix<T> classic_multiplication(const Matrix<T>& B);
    
    //Matrix/Skalar Operationen
    Matrix<T> operator*(const T& scalar); //Matrix*Skalar
    Matrix<T>& operator*=(const T& scalar);
    Matrix<T> operator/(const T& scalar);
    Matrix<T>& operator/=(const T& scalar);
    
    
    const T& operator()(const unsigned int& _row, const unsigned int& _column) const;
    T& operator()(const unsigned int& _row, const unsigned int& _column);
    
    unsigned get_rows() const; //SCHAUEN
    unsigned get_columns() const;
    std::vector<std::vector<T>> getMatrix();
    
    void transpose(void); //Transpose
    Matrix<T> transposeR(void); //Transpose mit R¸ckgabewert
    
    
protected:
    void rec_transpose();
    void square_transpose();
    
};

#include "matrix.tpp"


#endif
