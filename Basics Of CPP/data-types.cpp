#include <iostream>
using namespace std;
int main(){
    cout << "hello world" <<"\n";
    // or cout << "hello world" << endl; (more preffered way is \n);
    cout << "this is how to \n break a statement" << endl;
    //or cout << "Hello" << "World" << endl; (also works to add a space bw

    // rules to define variables 
    // can start with _ "underscore" 
    // can start with a-z and A-Z;
    // cannot start with numbers like : 10age;
    // datatype identifier = value;
    int age = 10;
    // integers contain no decumal values it can be in negative , positive and zero
    cout << "age" << endl;
    // the above is incorrect to print the age because it will print the word;
    cout << age << endl;
    // is correct to print variables defined within this code
    cout << sizeof(age) << endl; // 4 bytes for integer
    // will print how much bytes of memory will the variable age will take
    char ch = 'A';
    cout << ch << endl;
    cout << ch << " will take " << sizeof(ch) << " byte in memory" << endl;
    // printing with a little variation
    float x = 12.45f; //will have to the f to the end of the value
    cout << x << endl;
    cout << x << " will take " << sizeof(x) << " bytes in memory" << endl;
    // floating points to use decimal values
    bool isSafe = false;
    cout << isSafe << endl;
    cout << isSafe << " in boolean " << " will take " << sizeof(isSafe) << " byte in memory" << endl;
     // true -> 1 & false -> 


    double y = 12.434234234;
    cout << y << endl; // has rounded off 
    cout << sizeof(y) << endl;
    // above data types are considered primitive data types  = int , float , char , bool , double
    

    //type casting 
    // conversion -> implicit (small->big) (char -> int)
    // casting -> explicit (big -> small) (int -> char)

    //example of conversion
    char grade = 'A';
    int value = grade;
    cout << value << endl;
    // will print ascii value of grade -> (small->big)

    //example of explicit type casting
    double price = 100.00; //100.99 will also convert to ->100 too
    int new_price = (int)price;
    cout << new_price << endl;
    return 0;
}