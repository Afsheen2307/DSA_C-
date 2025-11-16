#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int first=0;
    int second=1;
    cout<<first<<" "<<second<<" ";
    for(int i=1;i<=num;i++){
        int third=first+second;
        cout<<third<<" ";
        first=second;
        second=third;
    }
    cout<<endl;
    return 0;
}