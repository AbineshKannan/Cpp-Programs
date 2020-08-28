#include<iostream>
using namespace std;
class Car{
public:
    string brand;
    string model;
    int price;
    int year;
    void print(){
        cout<<"Car Brand And Model:"<<brand<<"\t"<<model<<endl;
    }
};
int main()
{
    Car Benz;
    Benz.brand = "Mercandez";
    Benz.model = "m-7";
    Benz.price = 4500000;
    Benz.year = 2020;

    Benz.print();
    return 0;
}
