#include"rectangle2.cpp"
#include<iostream>
using namespace std;
int main(){

    float new_length;
    float width;
    rectangle2 A2(new_length,width);
    cout<<"enter the new_length and width:"<<endl;
    cin>>new_length>>width;
    cout<<"the area using constructor is :"<<A2.area();
    

}