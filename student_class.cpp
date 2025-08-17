//Ananya Swadia
//24070123012

#include<iostream>
#include<string>
using namespace std;

    class Student{
        public:
        string name;
        string branch;
        string subject;
        string year;
        float result;
    };
int main(){
    Student s1;
    s1.name="Ananya";
    s1.branch="EnTC";
    s1.subject="C++";
    s1.year="Second";
    s1.result=8.5;
   
    cout<<s1.name<<endl<<s1.branch<<endl<<s1.subject<<endl<<s1.year<<endl<<s1.result<<endl;
   
    return 0;
}

/* OUTPUT
Ananya
EnTC
C++
Second
8.5
*/