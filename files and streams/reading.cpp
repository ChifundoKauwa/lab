#include<iostream>
#include<fstream>
using namespace std;
int main()
{
// create and open atext file
ifstream myfile;
string line;
myfile.open("example.txt");
if(myfile.is_open()){
    while(getline(myfile,line)){
cout<<line<<"\n";
    }
myfile.close();
}
else{
cout<<"error !!!"<<endl;
}
    return 0;
}