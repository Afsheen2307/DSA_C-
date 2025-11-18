#include<iostream>
using namespace std;
int largest(int a , int b, int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    cout<<"Largest among three numbers is: "<<largest(3,65,93);
    return 0;
}