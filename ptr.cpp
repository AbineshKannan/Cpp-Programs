#include<iostream>
using namespace std;
int main(){
int var[3]={8,5,6};
int *ptr;
ptr = var;
cout<<var<<endl;
cout<<&ptr<<endl;
cout<<*(ptr)+1<<" "<<ptr[1]<<endl;
return 0;
}
