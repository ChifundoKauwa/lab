#include <iostream>
using namespace std;
int main()
{
    int size;
   int word=0;
    string* name=nullptr;
    int* pPointer=nullptr;
   cout<<"enter the size for pPointer:";
    cin>>size;
    pPointer =new int[size];
    
   
    for(int i =0;i<size;i++){
         cout <<"enter the value for array pPointer:";
        cin>>pPointer[i];


    }
     cout<<"enter the size of array string:";
    cin>>word;
     name =new string[word];
    for(int j =0;j<word;j++){
        cout<<"enter the word for string:";
            cin>>name[j];
        
    }
    for(int i=0;i<size;i++){
        cout<<pPointer[i]<<" ";
    }
    for(int j=0;j<word;j++){
        cout<<name[j]<<" ";
    }
}
    
    



