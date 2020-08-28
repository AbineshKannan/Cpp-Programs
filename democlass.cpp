#include<iostream>
using namespace std;
class Tv{
    public:
    string modelname;
    int price;
    void Testing(string name){
    cout<<name<<" Sucessfully Tetsed"<<endl;
    }
    void entry(string modelname, int price){
    cout<<"Model Name is: "<<modelname<<endl;
    cout<<"Price of the Tv is: "<<price<<endl;
    }
};
int main(){

Tv tv1;
string name;
int price;
cout<<"Enter Model Name: "<<endl;
cin>>name;
cout<<"Enter Price: "<<endl;
cin>>price;
tv1.entry(name,price);
tv1.Testing(name);
return 0;
}
