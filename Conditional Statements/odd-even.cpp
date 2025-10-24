#include <iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter A Number To Check For Odd And Even : ";
    cin >> num;
    if(num%2==0){
        cout<<"Number Is Even";
    }
    else if(num==0){
        cout<<"Number Is Zero";
    }
    else{
        cout<<"Number Is Odd";
    }
    return 0;
}