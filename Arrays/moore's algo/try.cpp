#include<iostream>
#include<vector>
using namespace std;
int majorElement(vector<int>&nums){
    int freq = 0;
    int n = nums.size();
    int ans = 0;
    for(int i = 0 ; i<n ; i++){
        if(freq==0){
            ans = nums[i];
        }
        if(ans==nums[i]){
            freq++;
        } else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int>hello = {2,2,1,1,1,2,2};
    int ans = majorElement(hello);
    cout<<"The Major Element in the array is : "<<ans;
    return 0;
}