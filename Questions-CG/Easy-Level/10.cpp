#include <iostream>
using namespace std;
void checkEvenOdd(int arr[],int n){
    int count_even = 0;
    int count_odd  = 0;
    for(int i = 0 ; i<n ; i++){
        if(arr[i]%2==0){
            count_even++;
        } else{
            count_odd++;
        }
    }
    cout <<"Even : "<<count_even<<endl;
    cout <<"Odd : "<<count_odd;
}
int main(){
    int n;
    cout<<"Enter Number Of Elements In Array : ";
    cin>>n;
    int arr[n] = {};
    cout<<endl;
    cout<<"Enter Elements Of Array : ";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    checkEvenOdd(arr,n);
}