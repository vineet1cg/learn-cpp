#include<iostream>
using namespace std;
int decToBinary(int deNum){
    int ans = 0;
    int pow = 1;
    while(deNum>0){
        int rem = deNum % 2;
        deNum = deNum / 2;
        ans = ans + (rem*pow);
        pow = pow * 10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter Number To Print Its Binary : ";
    cin>>n;
    cout<<decToBinary(n)<<endl;
    return 0;
}