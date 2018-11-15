#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
template <typename T = double, typename I = int>
class point
{
    public:
        point();
        point(T a,T b);

        point(point &o);

        void offset(I,I);
        void print();
        double getx();
        double gety();
        void setX(T x);
        void setY(T y);
    private:
        T x, y;
};

template<class T, class I>

void point <T, I>::offset(I nx, I ny)
{
    x += nx;
    y += ny;
}

template<class T, class I>
point <T,I>::point( T a, T b)
{
    x = a;
    y = b;
}

template<class T, class I>
point <T,I>::point()
{
    x = 0.0;
    y = 0.0;
}
template<class T, class I>
void point<T,I>::print(){

    cout << x << "->" << y << '\n';
}

template<class T, class I>
point <T,I> :: point( point &o){

    x = o.x;
    y = o.y;


}


#endif // POINT_H
