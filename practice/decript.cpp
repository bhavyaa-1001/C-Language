#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Ohduqlqj#iurp#Klvwrulfdo#Fdvh#Vwxglhv";

    for(int i=0;i<str.length();i++){
        cout<<char(int(str[i])-3);
    }


}