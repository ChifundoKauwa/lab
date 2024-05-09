#include"rectangle.cpp"
#include<iostream>
using namespace std;
int main(){
    float newlength;
    float newwidith;
    cout<<"enter the length and widith:"<<endl;
    cin>>newlength>>newwidith;
    rectangle A;
    A.Setlength(newlength);
    A.Setwidith(newwidith);
    cout<<"the area of a rectangle is "<<A.area()<<endl;
    

}