//return pair in sorted array with target sum
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int array[n] = {2,7,11,15};
    int target = 9;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j<n ; j++){
            if(array[i]+array[j]==target){
                cout<<" "<<array[i]<<" "<<array[j]<<endl;
            }
        }
    }
    //O(n^2)
    return 0;
}