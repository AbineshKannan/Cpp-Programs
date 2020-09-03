//https://practice.geeksforgeeks.org/problems/c-strings/0/
#include<iostream>
using namespace std;
int main(){
int tc; cin>>tc;
for(int i=0;i<tc;i++){
string a,b;
cin>>a;
cin>>b;
int an,bn;
an=a.length();
bn=b.length();
if(an>bn)
cout<<an<<endl;
else
cout<<bn<<endl;
cout<<a+b<<endl;
}
}
