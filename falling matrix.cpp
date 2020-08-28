#include<iostream>
#include<string>
#include<thread>
#include<cstdlib>
#include<ctime>
#include<chrono>

const int width = 100;
const int flips = 5;
const int sleeps = 100;

using namespace std;
int main(){
int i=0,x=0;
srand(time(NULL));

bool switches[width]={0};
const string ch = "1234567890qwertyuiopasfdghjklzmxncbv!@#$%^&*():?><}{[]><}";
const int l = ch.size();
system("color 0A");

while(true)
{
    for(int i=0;i<width;i+=2){
        if(switches[i])
            cout<<ch[rand()%l]<<" ";
        else
            cout<<" ";
    }
    for(i=0;i!=flips;++i){
        x=rand()%width;
        switches[x]=!switches[x];
    }
        cout<<endl;
       this_thread::sleep_for(chrono::milliseconds(sleeps));
}
return 0;
}
