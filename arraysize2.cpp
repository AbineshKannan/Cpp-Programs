//implementation of s=*(&arr+1)-arr;
#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6};
int s = *(&arr+1)-arr;
printf("arr: %d",arr);
printf("\n&arr: %p",&arr);
printf("\n&arr+1: %d",(&arr+1));
printf("\n*(&arr+1): %d",*(&arr+1));
printf("\n *(&arr+1)-arr: %d",s);
}
