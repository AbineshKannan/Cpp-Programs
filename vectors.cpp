//using Vectors
#include<iostream>2
#include<vector>
using namespace std;
int main(){
vector<string>arrays;
int s,as;
cout<<"enter arrays size: ";
cin>>as;
cout<<"enter string max length: ";
cin>>s;
char Temp[s];
for(int  i=0;i<as;i++){
    cin>>Temp;
    arrays.push_back(Temp);
}
for(int  i=0;i<as;i++){
    cout<<arrays[i]<<endl;
}
}
