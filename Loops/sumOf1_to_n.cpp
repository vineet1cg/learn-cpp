#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter How Many Numbers To Sum : ";
    cin >> n;
    int sum = 0;
    for(int i = 1; i<=n ; i++){
        sum = sum + i;
    }
    cout << "The Total Sum Is : " << sum << endl;
    return 0;
}