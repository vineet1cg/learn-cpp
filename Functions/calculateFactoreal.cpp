#include<iostream>
using namespace std;
int calculateFact(int n){
 int fact = 1 ;
 for(int i = n ; i>=1 ; i--){
    fact = fact * i;
 }
 return fact;
}
int main(){
    int x = 5;
    cout<<calculateFact(x)<<endl; // will work same as below
    // main -> calculateFact (x->n)
    // we can replace x with n and it will still work
    int n = 10;
    cout<<calculateFact(n)<<endl;
    cout << n << endl; // will print the value of n in the main function
    // note that integer n cant be used here
    // call stack -> main || calculateFact 
    // call stack is a container in memory 
    // once sum returns a value it gets out of the call stack
    // and once the main function returns 0 it will also be deleted from it
    // statements after return values wont be executed
    // void functions can return empty value that will return the control to the parent function


    return 0;
}