#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec = {1,2,3,4};
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    //size of vector
    // cout<<"Size = "<<vec.size()<<endl;
    //push back
    vector<int>vec2;
    vec2.push_back(2);
    vec2.push_back(3);
    vec2.push_back(5);
    cout<<"Size = "<<vec2.size()<<endl;
    cout<<"Capacity = "<<vec2.capacity()<<endl; // it doubles everytime 
    for(int val : vec2){
        cout<<val<<endl;
    } 
    vec2.pop_back(); //5 will be deleted
    cout<<"After Pop Back : "<<endl;
    for(int val : vec2){
        cout<<val<<endl;
    }
    //front
    cout<<vec2.front()<<endl;
    //back
    cout<<vec2.back()<<endl;
    //at
    cout<<vec2.at(0)<<endl;
    return 0;
}