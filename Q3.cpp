#include<iostream>
using namespace std;
void odd(int x,int y){
    if(x<y){
    for(int i=x;i<=y;i++){
        if(i%2!=0){
            cout<<i;
        }

        cout<<" ";
    }
    }
    else cout<<"its not possible";
    return;
}
int main(){
    cout<<"enter two number";
    int a;
    cin>>a;
    int b;
    cin>>b;
    odd(a,b);
}