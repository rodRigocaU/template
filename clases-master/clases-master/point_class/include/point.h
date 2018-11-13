#ifndef POINT_H
#define POINT_H

template <typename T = double, typename N = int>
class point
{
    public:
        point();
        point(N,N);
        point(point &o);

        void offset(N,N);
        void print();
        T getx();
        T gety();
        void setX(T x);
        void setY(T y);



point<T,N>::point()
{
    x = 0;
    y = 0;
}


template <typename T, typename N>
point<T,N>::point(N a, N b)
{
    x = a;
    y = b;
}




template <typename T, typename N>
point<T,N>:: point( point &o){

    x = o.x;
    y = o.y;


}




template <typename T, typename N>
void point<T,N>::offset(N nx, N ny)
{
    x += nx;
    y += ny;
}

template <typename T, typename N>
T point<T,N>::getx(){

    return x;
}

template <typename T, typename N>
T point<T,N>::gety(){

    return y;

}

template <typename T, typename N>
void point<T,N>::setX(T x){

this -> x = x;
}

template <typename T, typename N>
void point<T,N>::setY(T y){

this -> y  = y;

}

template <typename T, typename N>
void point<T,N>::print(){

    cout << x << "->" << y << '\n';
}
    private:
        T x, y;
};

#endif // POINT_H
