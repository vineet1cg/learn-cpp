#include <iostream>
using namespace std;
int main(){
    while(3>5){
        cout << "From While Loop" << endl;
    }
    do{
        cout << "From Do While Loop" << endl;
    }while(3>5);

    // only do while loop will give an output since it must run once even if the condition is false
    return 0;
}