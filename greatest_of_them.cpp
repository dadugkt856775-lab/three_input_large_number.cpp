#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"Enter y : ";
    cin>>y;
    cout<<"Enter z : ";
    cin>>z;
    if(x>y and x>z){
        cout<<x<<"is largest number";
    }
    else if(y>x and y>z){
        cout<<y<<" is largest number";
    }
    else{
        cout<<z<<" is largest number";
    }
}