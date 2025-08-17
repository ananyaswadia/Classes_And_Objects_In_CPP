//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

class Cube{
    int height=5;
    int length=10;
    int width=5;
   
    public:
    int volume(){
        int v;
        v=length*width*height;
        return v;
    }
   
};
int main(){
    Cube cube1;
    int v1= cube1.volume();
    cout<<"Volume of the cube is: "<<v1<<" sq units";
}

/* OUTPUT
Volume of the cube is: 250 sq units
*/