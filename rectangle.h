
#include<string>
using namespace std;
class rectangle{
private:
float length;
float widith;
public:
rectangle();
rectangle(float width, float length);
~rectangle();
float area();
void Setlength(float newlength);
void Setwidith(float newwidith);
float Getlength();
float Getwidith();

};