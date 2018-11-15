#include "point.h"
#include <iostream>

using namespace std;


template<class T, class I>
double point <T,I>::getx(){

    return x;
}


template<class T, class I>
double point<T,I>::gety(){

    return y;

}

template<class T, class I>
void point<T,I>::setX(T x){

this -> x = x;
}


template<class T, class I>
void point<T,I>::setY(T y){

this -> y  = y;

}


