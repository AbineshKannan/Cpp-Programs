#include<iostream>
using namespace std;
int main(){
int tc,sum,len;
cin>>tc;
for(int i=0;i<tc;i++)
{
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }cout<<sum;
}
}
