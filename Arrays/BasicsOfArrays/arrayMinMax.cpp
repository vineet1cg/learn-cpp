#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,4,5,6,7,21,-15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i = 0 ; i<n ; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<endl;
    cout<<max<<endl;
    int min = arr[0];
    for(int i = 0 ; i<n ; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<endl;
    cout<<min<<endl;
    return 0;

}