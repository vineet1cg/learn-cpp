#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your Age : ";
    cin>>age;
    if(age>=18){
        cout<<"You Can Vote\n";
    } else{
        cout<<"You Cannot Vote\n";
    }
    return 0;
}