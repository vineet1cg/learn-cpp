#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout << "Enter Number Of Rows For Pattern : ";
    cin >> n;
    cout << endl;
    cout << "Enter Number Of Cols For Pattern : ";
    cin >> m;
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=m ; j++){
            cout<< "*" << " ";
        }
        cout << endl;
    }
return 0;
}