#include <iostream>
using namespace std;
void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < size){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int mainArr[] = {4,2,7,8,1,2,5};
    int size = sizeof(mainArr)/sizeof(mainArr[0]);
    reverseArray(mainArr,size);
    return 0;
}