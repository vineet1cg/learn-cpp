#include<iostream>
using namespace std;
int main(){
    int n = 7;
    int array[n] = {3,-4,5,4,-1,7,-8};
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i = 0 ; i<n ; i++){
        currentSum = currentSum + array[i];
        maxSum = max(currentSum,maxSum);
        if(currentSum<0){
            currentSum = 0;
            // since it wont be helping us find the maximum sum of the subarray
            // and the checking condition is written in last because if there is an edge case where all the 
            // array elements are negative , so it wont reset before getting a maxSum.
        }
    }
    cout<<"The Max Subarray Sum Is : "<<maxSum<<endl;
    // time complexity O(n) => linear
    return 0;
}