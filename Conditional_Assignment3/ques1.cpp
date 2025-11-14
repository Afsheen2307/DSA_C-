#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENTER A NUMBER : ";
    cin>>num;
    if(num>0)
        cout<<"Postive Number";
    else if(num<0)
        cout<<"Negative Number";
    else
        cout<<"Number is zero";
    
}