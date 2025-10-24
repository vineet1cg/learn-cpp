#include <iostream> 
using namespace std;
void reverseArray(int arr[],int size){
    int rev_arr[size] = {};
    for(int i = 0 ; i<size ; i++){
        rev_arr[i] = arr[size-i-1];
    }
    cout<<endl;
    for(int i = 0 ; i<size ; i++){
        cout<<rev_arr[i]<<" ";
    }
}
void reverse2(int arr[], int size) {
    int rev_arr[size];
    for (int start = 0, end = size - 1; start < size; start++, end--) {
        rev_arr[start] = arr[end];
    }
     cout << endl;
    for (int i = 0; i < size; i++) {
        cout << rev_arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int mainArr[] = {1,2,3,4,5,6};
    int n = sizeof(mainArr)/sizeof(mainArr[0]);
    // reverseArray(mainArr,n);
    reverse2(mainArr,n);
    return 0;
}