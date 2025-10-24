#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number To Print Pattern : ";
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ;j<=i ; j++){
            cout<<j;
        }
        int temp = i - 1;
        for(int k = 1 ; k<=i-1 ; k++){
            cout<<temp--;
        }
        cout<<endl;
    }
    return 0;
}