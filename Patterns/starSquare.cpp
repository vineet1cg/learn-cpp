#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number To Print Pattern : ";
    cin >> n;
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=n ; j++){
            cout<< "*" << " ";
        }
        cout << endl;
    }
    // will print (n x n) square pattern
    return 0 ;
}