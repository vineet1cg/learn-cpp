#include <iostream>
using namespace std;
int main (){
    //mathematical operators in cpp
    int a = 5 , b = 10;
    cout << (a+b) <<endl; // sum
    cout << (b-a) <<endl; // subtraction
    cout << (a*b) <<endl; // multiplication
    cout << (b/a) <<endl; // division 
    cout << (b%a) <<endl; // modulo

    //note for division operator
    //it will only output smallest and nearest integer value
    //this is because int / int = int 
    //to change this we must use either explicit conversion or make one number float
    int x = 5;
    float y = 2.00;
    cout << (x/y) <<endl;

    int hello = (5 / (float)2);
    cout << hello << endl;
    // will not work since data is stored from left to right so it will be stored as an integer
    float hello2 = ( 5 / (float)2);
    cout<< hello2 << endl;
    // will work since the hello2 has float datatype it will be stored as 2.5


    // relational operators
    // they always return true or false in form 
    // true -> 1
    // false -> 0
    cout<<(5>3)<<endl; //greater than
    cout<<(3<5)<<endl; // less than
    cout<<(3<=3)<<endl; //less than or equal to
    cout<<(3==3)<<endl; //equals to
    cout<<(4!=4)<<endl; //not equals to



    //logical operators
    // OR || -> One Of The Condition Is True
    // AND && -> All Of The Conditions Are True
    // NOT ! -> Invert Condition Answer Or Used For Negation


    //unary operators
    // a++; and a--;
    //pre increment ++a; update - > use
    //post increment a++; use - > update
    //pre decrement --a; update - > use
    //post decrement a--; use - > update
    return 0;
}