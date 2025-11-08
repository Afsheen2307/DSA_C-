#include <iostream>
using namespace std;
int main(){
    float price_pen;
    cout<<"enter the price of a pen: ";
    cin>>price_pen;
    float price_pencil;
    cout<<"enter the price of a pencil: ";
    cin>>price_pencil;
    float price_eraser;
    cout<<"enter the price of an eraser: ";
    cin>>price_eraser;
    float total_cost=price_pen +price_pencil + price_eraser;
    cout<<"Total cost of the items: "<<total_cost<<endl;
    float gst=total_cost+0.18*total_cost;
    cout<<"Total cost after GST: "<<gst;
    return 0;
}
