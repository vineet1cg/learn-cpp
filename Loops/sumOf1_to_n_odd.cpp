#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter How Many Odd Numbers To Sum : ";
    cin >> n;
    int sum = 0;
    for(int i = 0 ; i<=n ; i++){
        if(i%2!=0){
            sum = sum + i;
        }
    }
    cout << "The Sum Is : " << sum << endl;
    return 0;

}
