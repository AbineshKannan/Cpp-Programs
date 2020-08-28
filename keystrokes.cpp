//to print keystrokes using kbhit
//press esc to realse
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
 char ch;
 while(1){
    if(kbhit()){
    ch = getch();

    if(int(ch)==27)
    break;

    cout<<ch;
    }
    }return 0;
    }
