#include <iostream>
using namespace std;
int main(){
    int i = 1;
    while(i<=5){
        cout << i;
        i++;
    }
    // will print 1 2 3 4 5 in the same line
    cout << endl; // add the new cout to the next line
    i = 1; // to reset value
    while(i<=20){
        cout << i << endl;
        i++;
    }
     // will print in vertical order
    return 0;
}