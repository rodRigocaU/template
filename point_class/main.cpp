#include <iostream>
#include <Vector.h>
#include <pointarray.h>
#include<point.h>


using namespace std;

int main()
{
    point<> u(4,10) ;
    point<> y(5,6);
    point<> w(7,8);
    point<> ar[] = {u,w,y};
   int size = sizeof(ar)/sizeof(ar[0]);

    pointarray ew(ar,size);
    ew.print();
    cout << endl;
    ew.push_back(u);
    ew.print();
  cout << '\t' << '\n';
    pointarray q(ar,size);
    q.print();
    cout << '\n';
    q.insert(y,0);
    q.print();


    return 0;
}
