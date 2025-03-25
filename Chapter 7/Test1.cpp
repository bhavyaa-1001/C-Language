#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class simple_calculator{
    int a,b;
    public:
        void sum(){
            cout<<"Enter Your First Number:";
            cin>>a;
            cout<<"Enter Your Second Number:";
            cin>>b;
            cout<<"The sum of these numbers is :"<<a+b;
        }
        void product(){
            cout<<"Enter Your First Number:";
            cin>>a;
            cout<<"Enter Your Second Number:";
            cin>>b;
            cout<<"The product of these numbers is :"<<a*b;
        }
        void subtract(){
            cout<<"Enter Your First Number:";
            cin>>a;
            cout<<"Enter Your Second Number:";
            cin>>b;
            cout<<"The subtraction of these numbers is :"<<a-b;
        }
        void division(){
            cout<<"Enter Your First Number:";
            cin>>a;
            cout<<"Enter Your Second Number:";
            cin>>b;
            cout<<"The subtraction of these numbers is :"<<a/b;
        }
};

class scientific_calculator{
    int a;
    public:
        void sin_calculate(){
            cout<<"Enter Your number to calculate Sin:";
            cin>>a;
            cout<<"The value is "<<sin(a);
        }
        void log_calculator(){
            cout<<"Enter Your number to calculate ln:";
            cin>>a;
            cout<<"The value is "<<log(a);
        }
};

class hybrid_calculator : public simple_calculator , public scientific_calculator{
    int a,b;
};
int main(){
    hybrid_calculator h;
    h.sum();
    h.log_calculator();
}