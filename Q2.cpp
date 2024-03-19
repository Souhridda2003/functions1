#include<iostream>
using namespace std;
double area(int x){
    float area=3.14*x*x;
    return area;
}
int main(){
    int r;
    cout<<"enter the radius";
    cin>>r;
    cout<<"area of the cicle is "<<area(r)<<" unit square";
}