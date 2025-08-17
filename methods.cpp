//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

class Cube{
    public:
    
    int height,length,width;
    void volume_out();
    void volume_in(){
        cout<<"---Volume calculation using method inside a class---"<<endl<<"Volume of the cube is: "<<length*width*height;
        return ;
    }
};
void Cube::volume_out(){
    cout<<endl<<"---Volume of cube using methode outside a class---"<<endl<<"Volume of cube is: "<<length*width*height;
    return ;
}
int main(){
    Cube c1;
    cout<<"Enter height: ";
    cin>>c1.height;
    cout<<"Enter width: ";
    cin>>c1.width;
    cout<<"Enter length: ";
    cin>>c1.length;
    
    c1.volume_in();
    c1.volume_out();
    
    return 0;
}
/* output 
Enter height: 5
Enter width: 5
Enter length: 5
---Volume calculation using method inside a class---
Volume of the cube is: 125
---Volume of cube using methode outside a class---
Volume of cube is: 125
*/