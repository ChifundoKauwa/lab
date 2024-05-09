#include<iostream>
using namespace std;
int main()
{
    void swapnumber(int &varA,int &varB);
    int varA =25;
    int varB =100;
    cout<<"varA before swap is :"<<varA<<endl;
    cout<<"varB before swap is :"<<varB<<endl;
    swapnumber(varA,varB);
    cout<<"varA after swap is :"<<varA<<endl;
    cout<<"varB after swap is :"<<varB<<endl;
    return 0;
}
void swapnumber(int &varA,int &varB){
    int swap =varA;
    varA= varB;
    varB=swap;
}