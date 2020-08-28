//generate random numbers using cpp
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
 //Comment the below line to generate the same random numbers everytime
 srand(time(0));
 for(int i=0;i<5;i++)
 cout<<rand()<<endl;
 return 0;
 }
