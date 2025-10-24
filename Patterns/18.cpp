#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number To Print Patterns : ";
    cin >> n;
    for(int i = 1 ; i<=n ; i++){
        int temp = 65;
        for(int j = 1 ; j<=n-i+1 ; j++){
            cout<<(char)temp++;
        }
        cout<<endl;
    }
    return 0;
}