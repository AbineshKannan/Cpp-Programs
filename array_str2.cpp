//get string input with spaces using getline
#include<iostream>
using namespace std;
void reverser(string str){
    int n = str.length();
    for(int i=n-1;i>=0;i--){
    cout<<str[i];
    }
}
int main(){
char str[20];
cout<<"Enter Your string: ";
cin.getline(str,20);
cout<<str<<endl;
reverser(str);
return 0;
}
