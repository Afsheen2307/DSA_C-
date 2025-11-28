#include<iostream>
using namespace std;
void decTobin(int decNum){
    int n=decNum;
    int binNum=0;
    int pow=1;
    while(n>0){
        int lastDig=n%2;
        binNum+=lastDig * pow;
        pow*=10;
        n/=2;
    }
    cout<<binNum<<endl;
}
int main(){
    decTobin(25);
    decTobin(49);
    decTobin(31);
    decTobin(88);
    return 0;
}