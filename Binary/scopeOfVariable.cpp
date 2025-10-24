#include <iostream>
using namespace std;
int y = 10; // global scope
int main(){
    if(3>1){
        int x = 10; //local scope
    }
    // cout << x << endl;
    // cant accsess x here becausee of block scope or local scop

}