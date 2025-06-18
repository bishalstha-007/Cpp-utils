#include<iostream>
using namespace std;
class ionic {
    private:
    string password;
    double salary; 
    
    public :
    string name;
    int age;
    
    void fun(string p,double s) {
        password=p;
        salary=s;
    }
    void display() {
        cout << "Name:" << name << endl << "Age:" << age << endl << "Password:" << password << endl << "Salary:" << salary << endl ;
    }
};

int main() {
    ionic i;
    string p;
    double s;
    
    cout << "Enter your name:" << endl ;
    cin >> i.name;
    cout << "Enter your age:" << endl ;
    cin >> i.age ;
    cout <<"Enter your password:" << endl ;
    cin >> p ;
    cout << "Enter your salary:" << endl ;
    cin >> s ;
    
    i.fun(p,s);
    i.display();
    return 0;
}
