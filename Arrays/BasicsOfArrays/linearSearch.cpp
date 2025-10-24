#include <iostream>
using namespace std;
int linearSearch(int arr[],int size,int target){
for(int i = 0; i<size ; i++){
    if(arr[i]==target){
        return i;
    }
    
}
return -1;
}
int main(){
    int mainArr[] = {1,2,3,6,5,7};
    int target = 5;
    int size = sizeof(mainArr)/sizeof(mainArr[0]);
    cout<<linearSearch(mainArr,size,target)<<endl;
    // time complexity  - > O(n)
    
    return 0;
}