// #include<iostream>
// using namespace std;
// int square(int x){
//     int digit=0;
//     while(x>0){
//         digit++;
//         x=x/10;
//     }
//     return digit*digit;
// }
// int main(){
//     int x;
//     cout<<"entr the number :";
//     cin>>x;
//     cout<<square(x);
// }
#include<iostream>
using namespace std;
int square(int n){
    int digit=0;
    while(n>0){
        digit++;
        n=n/10;
    }
    return digit*digit;
}
int main(){
    int x;
    cout<<"enter the number";
    cin>>x;
    cout<<square(x);
}

