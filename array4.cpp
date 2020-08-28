// A program to understand difference between array and &array
//arr+1 results in addition of 4 bytes to the value becoz int size is 4
//where as &arr+1 add 5*4 =20 bytes to the address.
#include<iostream>
using namespace std;
int main(){
int arr[5];
printf("%d,\t%p",arr,&arr);
printf("%d,\t%p",arr+1,&arr+1);
}
