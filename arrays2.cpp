// 2-D array Implememtation
#include<iostream>
using namespace std;
int main(){
int row,clmn;
cout<<"Enter Row Size: ";
cin>>row;
cout<<"Enter Column Size: ";
cin>>clmn;
int arr[row][clmn];
for(int i =0;i<row;i++){
    for(int j=0;j<clmn;j++){
        printf("Enter Array[%d][%d] :",i,j);
        cin>>arr[i][j];
    }
}
cout<<"The Elements Entered Are"<<endl;
for(int i =0;i<row;i++){
    for(int j=0;j<clmn;j++){
        printf("Enter Array[%d][%d] :",i,j);
        cout<<arr[i][j];
         cout<<"\n";
    }

}
}
