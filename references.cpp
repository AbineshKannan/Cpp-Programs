#include<iostream>
using namespace std;
int main(){
int x = 20;
int& ref = x;
ref=50;
cout<<"x="<<x<<endl;
x=30;
cout<<"ref="<<ref<<endl;
}

