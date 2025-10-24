#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number To Print Pattern : ";
    cin >> n;
    int temp = 65;
    for(int i = 1 ; i<=n ; i++){
        cout<<(char)temp++<< " ";
    }
    return 0;
}