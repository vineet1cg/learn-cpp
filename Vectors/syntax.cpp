#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec = {1,2,3}; // create an vector
    vector<int>vec2(3,0); //(size , element)
    //for each loop is good for vector
    for(int value : vec){
        cout<<value<<endl;
    }
    return 0;
}