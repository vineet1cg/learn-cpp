#include <iostream>
using namespace std;

void checkNum(int number){
    if(number>0){
        cout<<"Positive"<<endl;
    }
    else if(number==0){
        cout<<"Zero"<<endl;
    }
    else{
        cout<<"Negative"<<endl;
    }
}
int main(){
    checkNum(0);
    checkNum(1);
    checkNum(-1);
    return 0;
}