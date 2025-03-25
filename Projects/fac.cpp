#include <iostream>
#include<string>
using namespace std;

int main(){
    int n;
    double final; 
    final=1;
    cout<<"Enter the Number:";
    cin>>n;
    for(int i=1;i<n+1;i++){
        final*=i;
    }
    cout<<"The result is "<<final;

}