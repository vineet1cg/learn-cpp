#include <iostream>
using namespace std;
int main (){
    int marks;
    cout << "Enter Marks Of Student : ";
    cin >> marks;
    if(marks>=90){
        cout<<"A";
    }else if(marks<90 && marks>=80){
        cout<<"B";
    }else if(marks<80){
        cout<<"C";
    }else{
        cout<<"Low Marks";
    }
}