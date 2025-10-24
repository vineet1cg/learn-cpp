#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter A Number To Check If It Is Prime Or Not : ";
    cin >> n;
    bool isPrime = true;
    // starting from 2 because every digit is divisable by 1 , condition is to check wether i < sqrt(n) , since we cant use that
    // we used i * i < n which is the same and it will terminate unneccesary iterations of for loop due to mathematical property of prime numbers
    for(int i = 2 ; i*i<n ; i++){
        if(n%i==0){
            isPrime = false;
            break;
        } else {
            isPrime = true;
        }
    }
    if(isPrime){
        cout << "Number Is Prime" << endl;
    } else{
        cout << "Number Isnt Prime" << endl;
    }
}