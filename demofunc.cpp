#include<iostream>
using namespace std;
int func(int a, int b){
    int q;
    q=a+b;
    return q;
}
int fun(int *a, int *b){
    int q;
    q=*a + *b;
    return q;
}
int main(){
    int a=5,b=7,s;
    s=func(a,b);
    cout<<"Call by Value:"<<s<<endl;
    s=fun(&b,&a);
    cout<<"Call by Reference:"<<s<<endl;
    return 0;
}
