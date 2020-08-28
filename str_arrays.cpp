//in cpp a string is a 1D Array and an Array of Strings is a 2D Array.
#include<iostream>
using namespace std;
int main(){
 const char * colors[4] = {"redish","blue","orange","yellow"};
  for(int i=0;i<4;i++){
    cout<<colors[i]<<endl;
}
  for(int i=0;i<4;i++){
    cout<<(*colors+i)<<endl;
}
}
