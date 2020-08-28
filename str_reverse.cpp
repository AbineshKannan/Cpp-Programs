//reversing a string using different methods
#include<iostream>
#include<algorithm>
using namespace std;
void printrev(string str){
int n = str.length();
for(int i=n-1;i>=0;i--)
    cout<<str[i];
}
void reversing(string& str){
int n= str.length();
for(int i=0;i<n/2;i++)
    swap(str[i],str[n-i-1]);
}
int main(){
string str;
cout<<"Enter input string: "<<endl;
getline(cin,str);
cout<<"printed Using Reverse Printing:"<<endl;
printrev(str);
cout<<"\n";
reversing(str);
cout<<"printed Using Swapping Function:"<<endl;
cout<<str<<endl;;
reverse(str.begin(),str.end());
cout<<"printed Using Reverse Function:"<<endl;
cout<<str;
}
