//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

class Calculator{
    public:
    int num1;
    int num2;
   
    int sum= num1+num2;
    int sub= num1-num2;
    int mul= num1*num2;
    float div= num1/num2;
   
};

int main(){
    Calculator c1;
    cout<<"Enter first number: ";
    cin>>c1.num1;
    cout<<"Enter second number: ";
    cin>> c1.num2;
   
    cout<<"Addition of "<<c1.num1<<" & "<<c1.num2<<" is: "<<c1.sum;
    return 0;
}
/* OUTPUT
Enter first number: 10
Enter second number: 5
Addition of 10 and 5 is: 15
Subtraction of 10 and 5 is: 5
Multiplication of 10 and 5 is: 150
Division of 10 and 5 is: 2
*/