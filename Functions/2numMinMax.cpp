#include<iostream>
using namespace std;
int minOf(int a , int b){
    int min;
    if(a>b){
        min = b;
    } else {
        min = a;
    }
    return min;
}
int maxOf(int a, int b){
    int max;
    if(a>b){
        max = a;
    } else {
        max = b;
    }
    return max;
}
int main(){
cout<<minOf(5,6)<<endl;
cout<<maxOf(10,15)<<endl;

return 0;
}