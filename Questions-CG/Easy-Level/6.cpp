#include <iostream>
using namespace std;
void loginFunc(string username ,string password){
    if(username=="admin" && password =="1234"){
        cout << "\nLogin Successful" <<endl;
    }
    else{
        cout<< "\nInvalid Credentials!";
    }
}
int main(){
    string username;
    string password;
    cout<<"Enter Username : ";
    cin>>username;
    cout<<"Enter Password : ";
    cin>>password;
    loginFunc(username,password);
    return 0;
}