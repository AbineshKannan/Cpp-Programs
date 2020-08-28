// This program gives the operator increment step by step...
#include<iostream>
using namespace std;
int main(){
volatile int a = 10;
cout<<"Value of a is "<<a<<endl;
cout<<"value of a++ is "<<a++<<endl;
cout<<"value of ++a is "<<++a;
return 0;
}
