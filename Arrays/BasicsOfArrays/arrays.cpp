#include <iostream>
using namespace std;
int main(){
    // creation of an array;
    // it saves same type of data in it.
    // they are linear
    int marks[] = {1,2,3,4};
    int n = sizeof(marks)/sizeof(marks[0]);
    for(int i = 0 ; i<n; i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}