#include<iostream>
#include<vector>
using namespace std;
int maxSubarray(vector<int> &nums){
    int currentSum = 0 , maxSum = INT_MIN ;
    for(int val : nums){
        currentSum = currentSum + val;
        maxSum = max(currentSum,maxSum);
        if(currentSum<0){
            currentSum = 0;
        }
    }
    return maxSum;
};
int main(){
    vector<int>array = {3,-4,5,4,-1,7,-8};
    cout<<maxSubarray(array)<<endl;
}