//Ananya Swadia
//24070123012

#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    string brand;
    int year;
};
int main(){
    int i;
    Car c[i];
    for( i=1;i<=2;i++){
        cout<<endl<<"Enter brand of car "<<i<<" : ";
        cin>>c[i].brand;
        cout<<"Enter year of manufacturing: ";
        cin>>c[i].year;
        cout<<endl<<c[i].brand<<endl<<c[i].year<<endl;
    }
    return 0;
}

/* OUTPUT
Enter brand of car 1 : Maruti
Enter year of manufacturing: 2019

Maruti
2019

Enter brand of car 2 : Toyota
Enter year of manufacturing: 2022

Toyota
2022
*/