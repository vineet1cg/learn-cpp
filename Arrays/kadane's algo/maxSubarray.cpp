#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int array[n] = {1,2,3,4,5};
    int maxSum = INT_MIN;
    for(int start = 0 ; start<n ; start++){
        int currentSum = 0;
        for(int end = start ; end<n ; end ++){
            currentSum = currentSum + array[end];
            maxSum = max(currentSum,maxSum);
        }
    }
    cout<<maxSum<<endl;
    // time complexity O(n^2)
    // bruteforce way to do it
    return 0;
}