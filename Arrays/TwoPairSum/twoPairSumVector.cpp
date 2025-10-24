#include<iostream>
#include<vector>
using namespace std;
vector<int>pairSum(vector<int>nums,int target){
    vector<int>ans;
    int n = nums.size();
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j<n ; j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }   
        }
    }
    return ans;
}
//O(n^2)
int main(void){
    vector<int>hello = {2,3,4,5,6};
    int target = 5;
    vector<int>ans = pairSum(hello,target);
    cout<<"The Indexes Are : "<<ans[0]<<" , "<<ans[1]<<endl;
    return 0;
}