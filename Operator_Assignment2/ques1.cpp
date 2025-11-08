#include <iostream>
using namespace std;
int main(){
    // A
    int x=2,y=5;
    int exp1=(x*y/x);
    int exp2=(x*(y/x));
    cout<<exp1<<",";
    cout<<exp2<<"\n";
    // B 
    x=10,y=5;
    int exp3=(y*(x/y + x/y));
    int exp4=(y * x / y + y * x /y);
    cout<<exp3<<" ";
    cout<<exp4<<"\n";
    // C
    int x=200,y=50;
    int z=100;
    if(x > y && y > z){
        cout<<"Hello \n";
    }
    if (z > y && z < x){
        cout<< "C++ \n";
    }
    if ((y+200) < x && (y+150) < z){
        cout<<"Hello C++ \n";
    }
    return 0;
} 