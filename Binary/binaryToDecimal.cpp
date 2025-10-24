#include <iostream>
using namespace std;
int binaryToDec(int n){
    int digit;
    int sum = 0;
    int pow = 1;
    while(n!=0){
        digit = n % 10;
        digit = digit * pow;
        pow = pow * 2;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter Binary Number : ";
    cin >> n;
    cout<<binaryToDec(n)<<endl;
    return 0;  
}