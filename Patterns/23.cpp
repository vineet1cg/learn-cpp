#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number To Print Pattern :";
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=i; j++){
            cout<<" ";
        }
        int temp = 65;
        for(int k = n ; k>=i ; k--){
            cout<<(char)temp++;
        }
        cout<<endl;
    }
    return 0;
}