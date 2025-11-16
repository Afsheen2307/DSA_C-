#include <iostream>
using namespace std;

int main(){
    // for(int i=1;i<=4;i++){
    //     cout<<"****"<<endl;
    // }
    // for(int i=5;i>=1;i--){
    //     cout<<i<<" ";
    // }
    // int n=10829;
    // int sum=0;
    // while(n>0){
    //     int lastDig=n%10;
    //     if(lastDig%2!=0){
    //         sum+=lastDig;
    //     }
    //     n/=10;
    //     // n/=10;  
    // }
    // cout<<"sum is : "<<sum;
    // n=10829;
    // int res=0;
    // while(n>0){
    //     int lastDig=n%10;
    //     res=res*10+lastDig;
    //     n/=10;
    // }
    // cout<<"Reverse of the number is: "<<res;
    do{
        int num;
        cout<<"Enter a number: ";
        cin>>num;
        if(num%10==0){
            continue;
        }
        cout<<"You entered : "<<num<<endl;
    }while(true);
    return 0;
}