#include<iostream>
#include<fstream>
using namespace std;
int main()
{
// create and open atext file
ofstream myfile;
myfile.open("example.txt");

if(myfile.is_open()){
myfile<<"hello my file"<<endl;

myfile.close();
}
else
cout<<"error"<<endl;
    return 0;
}