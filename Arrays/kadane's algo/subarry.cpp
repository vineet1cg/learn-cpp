#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int array[5] = {1,2,3,4,5};
    for(int start = 0 ; start<n ; start++){
        for(int end = start ; end < n ; end++){
            for(int i = start ; i<=end ; i++){
                cout<<array[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    // time complexity O(n^3)
    return 0;
}