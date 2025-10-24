#include <iostream>
using namespace std;
void checkTriangle(int a,int b,int c){
    if(a==b && b==c){
        cout<<"Equilateral Triangle" << endl;
    }
    else if(a==b || b==c){
        cout<<"Isosceles Triangle" << endl;
    }
    else{
        cout<<"Scalene Triangle" << endl;
    }
}
int main(){
    checkTriangle(1,2,3);
    checkTriangle(1,1,3);
    return 0;
}