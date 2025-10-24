#include <iostream>
using namespace std;
int main(){
    // range of int is -2^31 -> 2^31 - 1 (includes 0)
    cout<<"Integer Size : "<<sizeof(int)<<endl;
    cout<<"Long Int Size : "<<sizeof(long int)<<endl;
    cout<<"Short Int Size : "<<sizeof(short int)<<endl;
    cout<<"Long Long Int Size : "<<sizeof(long long int)<<endl;
    cout<<"Signed Int Size : "<<sizeof(signed int)<<endl;
    cout<<"Unsigned Int Size : "<<sizeof(unsigned int)<<endl; // does not have negative values 
    cout<<"Double Size : "<<sizeof(double)<<endl;
    cout<<"Float Size : "<<sizeof(float)<<endl;
    cout<<"Character Size : "<<sizeof(char)<<endl;


return 0;
}