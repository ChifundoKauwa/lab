#include<iostream>
using namespace std;
int main()
{
    int numberofElement =0;
    int* dynamicArray =nullptr;
    cout<<"how many numbers would you like to type?";
    cin>>numberofElement;
    dynamicArray = new int[numberofElement];
    if(dynamicArray==nullptr)
    {
        cout<<"erroe: memory could not be allocated";
        
    }
    else{
        for(int i=0;i<numberofElement;i++)
        {
            cout<<"enter number: ";
            cin>>dynamicArray[i];
        }
        cout<<"you have entered : ";
        for(int j=0;j<numberofElement;j++)
        {
            cout<<dynamicArray[j]<<" ,";

        }
        delete[] dynamicArray;
    }
    return 0;
}