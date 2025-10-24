#include <iostream>
using namespace std;
int main(){
    char check;
    cout << "Enter A Character To Check For Uppercase Or Lowecase : ";
    cin >> check;
    int ascii = (int)check; //used type casting but can be done without it by -> checking if(ch>=65 && ch<=90)
    if(ascii>=65 && ascii<=90){
        cout << check << " Is An Uppercase" << endl;
    }else if(ascii>=97 && ascii<=122){
        cout << check << " Is A Lowercase" << endl;
    }else{
        cout << check << " Is Not An Alphabet" << endl;
    };
    return 0;
}