#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter No To Print Pattern : ";
    cin >> n;
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ;j<=i ; j++){
            cout<<" ";
        }
        for(int k = n ;k>=i;k--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}