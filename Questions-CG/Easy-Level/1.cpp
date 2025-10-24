#include <iostream>
using namespace std;

char gradeCheck(int marks){
    if(marks>=90 && marks<=100){
        return 'A';
    }
    else if(marks>=80 && marks<=89){
        return 'B';
    }
    else if(marks>=70 && marks<=79){
        return 'C';
    }
    else if(marks>=60 && marks<=69){
        return 'D';
    }
    else if(marks<60 && marks >=0){
        return 'F';
    }
    else{
        return 'I';
    }
}
int main(){
    cout<<gradeCheck(86)<<endl;
    return 0;
}