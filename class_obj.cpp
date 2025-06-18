#include<iostream>
using namespace std;

class room {
    public:
    double l,b,h ;

    double area() {
        return l*b;
    }
    double volume() {
        return l*b*h;
    }
};

int main () {
    room r;

    cout << "Enter length of wall:" << endl;
    cin >> r.l;
    cout << "Enter breadth of wall:" << endl;
    cin >> r.b;
    cout << "Enter height of wall:" << endl;
    cin >> r.h;

    int a= r.area();
    int v=r.volume();

    cout<< "area of a wall: " << a << endl;
    cout << "volume of a wall: " << v << endl ;
    return 0;
}