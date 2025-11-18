#include<iostream>
using namespace std;
int formula(int a, int b){
    return a*a + b*b + 2*a*b;
}
int main(){
    cout<<formula(2,4);
    return 0;
}