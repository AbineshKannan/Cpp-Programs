#include<iostream>
using namespace std;
#define Area(l, b) (l*b)
#define Pi 3.14
int main(){
int radius = 50,rec;
int length = 100,breadth = 20, M;
M=Area(length,breadth);
rec=Pi*radius*radius;
cout<<"area of Rectangle: "<<rec<<endl;
cout<<"area is "<<M;
return 0;
}
