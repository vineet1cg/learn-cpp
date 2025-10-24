#include <iostream>
using namespace std;
float avgOfarray(int array[],int n){
    int sum = 0;
    for(int i = 0 ; i<n ; i++){
        sum+=array[i];
    }
    float avg = sum/n;
    return avg;
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
    cout<<avgOfarray(arr,n);
    return 0;
}