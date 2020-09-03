//https://practice.geeksforgeeks.org/problems/c-arrays-sum-of-array-set-1/0
//array Sum Pratice
#include<iostream>
using namespace std;
int main(){
int tc,n,temp,sum=0;
cin>>tc;
for(int i=0;i<tc;i++){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        sum = sum + temp;
    }cout<<sum<<endl;
    sum=0;
}
}
