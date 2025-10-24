#include <iostream>
using namespace std;
void trafficLight(string color){
    if(color=="red"){
        cout<<"Stop";
    } else if(color=="yellow"){
        cout<<"Slow Down";
    } else if(color=="green"){
        cout<<"Go";
    } else{
        cout<<"Invalid Color!";
    }
}
int main(){
    string color;
    cout << "Enter A Color : ";
    cin>>color;
    trafficLight(color);
    return 0;
}