//to find array size using pointers ans using sizeof
#include<iostream>
using namespace std;
int main()
{
int arr[]={1,2,3,4,5,6};
int si =sizeof(arr)/sizeof(arr[0]);
cout<<si;
}
