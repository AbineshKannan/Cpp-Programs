//get array and caharacter size in a array
#include<iostream>
using namespace std;
int main(){
int as,str;
cout<<"Enter arraysize: ";
cin>>as;
cout<<"enter strings's Max Length: ";
cin>>str;
char array[as][str];
cout<<"Enter Array Elements one by one"<<endl;
for(int i=0;i<as;i++){
    cin>>array[i];
}
for(int i=0;i<as;i++){
    cout<<array[i]<<endl;
}
}
