#include<iostream>
using namespace std;
int calculateFact(int n){
 int fact = 1 ;
 for(int i = n ; i>=1 ; i--){
    fact = fact * i;
 }
 return fact;
}
int binomialCof(int x , int y){
    int a = calculateFact(x);
    int b = calculateFact(y);
    int c = calculateFact(x-y);
    int ans = a/(b*c);
    return ans;
}
int main(){
    cout<<binomialCof(8,2)<<endl;
    return 0;
}