//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

class Calculator{
    public:
    int num1;
    int num2;
    int operation,sum,sub,mul,divi;
   
   int calci(){
       cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>> num2;
       cout<<"Addition of "<<num1<<" & "<<num2<<" is: "<<num1+num2<<endl;
       cout<<"Subtraction of "<<num1<<" & "<<num2<<" is: "<<num1-num2<<endl;
       cout<<"Multiplication of "<<num1<<" & "<<num2<<" is: "<<num1*num2<<endl;
       cout<<"Division of "<<num1<<" & "<<num2<<" is: "<<num1/num2<<endl;
       return 0;
   }
   
};

int main(){
    Calculator c1;
    int calci1= c1.calci();
    cout<<calci1;
   
    return 0;
}

/* output 
Enter first number: 12
Enter second number: 12
Addition of 12 & 12 is: 24
Subtraction of 12 & 12 is: 0
Multiplication of 12 & 12 is: 144
Division of 12 & 12 is: 1
*/
