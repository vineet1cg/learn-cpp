#include <iostream>
using namespace std;
void changeArr(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        arr[i] = arr[i] * 2;
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int mainArr[] = {1,2,3,4};
    int n = sizeof(mainArr)/sizeof(mainArr[0]);
    changeArr(mainArr,n);
    // what has happened over here ? 
    /// original array was 1 , 2 , 3 ,4
    // we passed it through changeArr Function
    // it got passedByRefrence and changed the original array in the main function
    // when passing by refrence the memory adress of name of array gets passed through as pointer
    // after getting the pointer the memory just adds +4 (for integer) to accsess next element of array
    return 0;
}