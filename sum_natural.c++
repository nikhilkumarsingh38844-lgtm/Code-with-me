#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    // int sum=0;
    // for(int i=1;i<=num;i++){
    //     sum += i;
    // }
    // cout<<"sum is:-" <<sum;
    int sum=(num*(num+1))/2;
    cout<<"sum is:-" <<sum;
    return 0;
} 