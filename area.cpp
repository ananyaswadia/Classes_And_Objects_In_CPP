//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

class Area{
    public:
    int length;
    int width;
    int height;
    int A= width*length;
    int V= width*length*height;
};
int main(){
    Area a1;
    cout<<"Enter length: ";
    cin>>a1.length;
    cout<<"Enter width: ";
    cin>>a1.width;
    cout<<"Enter height: ";
    cin>>a1.height;
   
    if(a1.length==a1.width){
        cout<<"It's a Cube"<<endl;
    }
    else cout<<"It's a Cuboid"<<endl;
   
    if(a1.length<0 || a1.width<0){
        cout<<"ERROR: Length and width cannot be negative.";
    }
    else cout<<"Area is: "<<a1.A<<endl;
   
    cout<<"Volume of the 3d shape is: "<<a1.V<<endl;
}
/* OUTPUT
Enter length: 5
Enter width: 5
Enter height: 5
It's a Cube
Area is: 25
Volume of the 3d shape is: 125
*/