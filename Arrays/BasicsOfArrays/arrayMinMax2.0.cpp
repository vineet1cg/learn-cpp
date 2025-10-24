#include <iostream>
using namespace std;
int main(){
    int nums[] = {5,1,4,7,5,67,-15,24};
    int n = sizeof(nums)/sizeof(nums[0]);
    int smallest = INT_MAX;
    int largest  = INT_MIN;
    for(int i = 0 ; i<n ; i++){
        smallest = min(nums[i],smallest);
        largest  = max(nums[i],largest);
    }
    cout<<smallest<<endl;
    cout<<largest<<endl;
    return 0;
}