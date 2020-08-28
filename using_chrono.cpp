//using thread and chrono to print using seconds
#include<iostream>
#include<chrono>
#include<thread>
using namespace std;
int main(){
for (int i=10;i>0;i--)
{
cout<<i<<" ";
this_thread::sleep_for(chrono::seconds(1));
}
cout<<endl;
cout<<"lift-Off...!";
return 0;

}
