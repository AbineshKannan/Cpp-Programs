//scanf formating ways
#include<iostream>
using namespace std;
int main(){
int age;
//printf("enter your age: ");
scanf("%*s, %d",&age);
printf("%d",age);
return 0;
}
