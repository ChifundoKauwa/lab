#include<iostream>
using namespace std;
int main()
{
    int x =3;
    // here the value of x is increased after the initial value of x is assigned to y
    //hence the value assigned to y is the value of x before it was increased
    int y =x++;
    cout<<"x: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
    return 0;
}