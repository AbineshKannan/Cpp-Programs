//to clear input buffer as using getchar
#include<iostream>
#include<vector>
using namespace std;
int main(){
int a;
string y;
cin>>a;
//it clears input buffers
cin>>ws;
getline(cin,y);
cout<<a<<"\n"<<y<<endl;
return 0;
}
