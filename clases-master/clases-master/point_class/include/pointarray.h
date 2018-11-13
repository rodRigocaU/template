#ifndef POINTARRAY_H
#define POINTARRAY_H
#include <point.h>


class pointarray
{
    public:
        pointarray();
        pointarray(const point<double, int> pts[], const int size);
        pointarray(pointarray &o);
        void print();
        ~pointarray();
        void resize(int);
        void push_back(const point<double, int> &p);
        void insert(const point<double, int> &q , int);

        int geta();

   private:

       int size;
       point<double, int> *points;
};

#endif // POINTARRAY_H
