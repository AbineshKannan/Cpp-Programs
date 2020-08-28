// 3-D array Implememtation
#include<iostream>
using namespace std;
int main(){
int row,clmn,es;
cout<<"Enter Row Size: ";
cin>>row;
cout<<"Enter Column Size: ";
cin>>clmn;
cout<<"Enter Element Size: ";
cin>>es;
int arr[row][clmn][es];
for(int i =0;i<row;i++){
    for(int j=0;j<clmn;j++){
            for(int k=0;k<es;k++){
        printf("Enter Array[%d][%d][%d] :",i,j,k);
        cin>>arr[i][j][k];
    }
}
}
cout<<"The Elements Entered Are"<<endl;
for(int i =0;i<row;i++){
    for(int j=0;j<clmn;j++){
            for(int k=0;k<es;k++){
        printf("Enter Array[%d][%d][%d] :",i,j,k);
        cout<<arr[i][j][k];
         cout<<"\n";
    }
    }
}
}
