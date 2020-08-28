//Conditionally assign a value without using conditional and arithmetic operators
//link https://www.geeksforgeeks.org/conditionally-assign-value-without-using-conditional-arithmetic-operators/

#include<iostream>
using namespace std;
int main(){
    int x,y;
int arr[2];
cout<<"enter the value of a"<<endl;
cin>>arr[0];
cout<<"enter the value of b:"<<endl;
cin>>arr[1];
cout<<"Enter The value of x:"<<endl;
cin>>x;
y = arr[x];
cout<<"value of y is"<<y<<endl;
return 0;
}
