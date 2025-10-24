#include<iostream>
using namespace std;
int printHello(){
    cout<<"Hello";
    return 3;
}
// returntype name(parameters){ commands to run };
int main(){
    // printHello(5) is an arguement passed in the function
    printHello(); // calling the function we can do as many times as we want
    int x = printHello();
    cout<<"Returned Value Is " << x << endl;
    // or cout << printHello() <<endl;
    


    return 0;
}