//array sum
#include<iostream>
using namespace std;
int main(){
int sum = 0,arr[6];
for(int i=0;i<6;i++){
    cin>>arr[i];
    sum += arr[i];
    }
cout<<"The Sum  is : "<<sum<<endl;
    for(int i=0;i<6;i++){
    cout<<arr[i];
    }
return 0;
}
