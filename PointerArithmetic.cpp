#include <iostream>
using namespace std;
int main()
{
    int* pPointer = nullptr;

    int numbersArray[3]= {10,20,30};
    pPointer=numbersArray;
    cout<<"address of a pointer:"<<pPointer<<endl;
    cout<<"address of numberArray[0: ]"<<numbersArray<<endl;
    // this outputs the value of first element using a pointer and indirection
cout<<"value at pPointer: "<<*pPointer<<endl;
//this outputs the value of a second element
cout<<"value at ++pPointer:"<< *(++pPointer)<<endl;
//this  ouputs the value of a first element
cout<<"the value at pPointer++:"<<*(pPointer++)<<endl;
return 0;
}