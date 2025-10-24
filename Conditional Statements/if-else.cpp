#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A Number To Check For Positive / Negative /Zero : ";
    cin >> n;
    if(n>0){
        cout<<"\nPositive";
    }
    else if(n==0){
        cout<<"\nZero";
    }
    else{
        cout<<"\nNegative";
    }
    return 0;
}