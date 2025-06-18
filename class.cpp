#include<iostream>
using namespace std;
 
class college {
    public:
    string name;
    int age;
    long long no;
    
void check (){
    cout<< "My name is " << name << endl << "age= " << age << endl << "phone number =" << no << endl ;
}

};
int main () {
    college c1;
    c1.name ="bishal shrestha";
    c1.age=20;
    c1.no=9814334505 ;

    c1.check();
    return 0;

}
