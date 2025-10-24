#include<iostream>
#include<vector>
using namespace std;
vector<int>twoPair(vector<int>&nums,int target){
    int n = nums.size();
    int i = 0 , j = n - 1;
    vector<int>answer;
    while(i<j){
        int PairSum = nums[i] + nums[j];
        if(PairSum>target){
            j--;
        } else if(PairSum<target){
            i++;
        }else{
             answer.push_back(i);  
             answer.push_back(j);  
             return answer;
        }
    }
    return answer;
};
int main(){
    vector<int>hello = {2,7,11,15};
    int target = 13;
    vector<int>answer = twoPair(hello,target);
    cout<<answer[0]<<" , "<<answer[1]<<endl;
    return 0;
}