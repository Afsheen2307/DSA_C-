#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int n=num;
    int sum=0;
    while(num>0){
        int rem=num%10;
        sum+=rem*rem*rem;
        num/=10;
    }
    if(n==sum){
        cout<<n<<" is an Armstrong number";
    }else{
        cout<<n<<" is not an armstrong number";
    }
    return 0;
}