#include<iostream>
using namespace std;
int reverse(int n){
    int rev=0;
    while(n>0){
        int lastDig=n%10;
        rev=rev*10+lastDig;
        n/=10;
    }
    return rev;
}
bool isPalindrome(int n){
    int revNum=reverse(n);
    return revNum==n;
    
}

int main(){
    int n=121;
    cout<<n<<" is Palindrome? "<<boolalpha<<isPalindrome(n)<<endl;
    return 0;
}