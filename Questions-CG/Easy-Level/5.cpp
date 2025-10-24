#include <iostream>
using namespace std;
void checkForVote(int age){
    if(age>=18 && age<=122 && age>=0){
        cout<<"Eligible For Vote!"<<endl;
    } else {
        cout <<"Not Eligible For Vote!" <<endl;
    }
}
int main(){
    checkForVote(18);
    checkForVote(5);
    return 0;
}