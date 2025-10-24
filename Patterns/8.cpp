#include <iostream>
using namespace std;
int main(){
    int n;
    cout << " Enter Number To Print Pattern : ";
    cin >> n;
    for(int i = 1 ; i<=n ; i++){
        int temp = 1;
        for(int j = 1 ; j<=i ; j++){
            cout<<temp++<<" ";
        }
        cout<<endl;
    }

    return 0;
}