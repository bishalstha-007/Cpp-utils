# include<iostream>
using namespace std;

int  main() {
    int *ptr= new int[5] ;
    cout << "Enter any five numbers:" << endl ;
    for (int i=0; i<5; i++)
    cin >> ptr[i] ;
    for (int i=0; i<5; i++)
    cout << "Number " << i << ":" << ptr[i] << endl ;
    delete[] ptr;
    return 0;

}