#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    int copy = num; 
    int sum =0;
    while(num>0){
        int unit = num%10;
        sum = sum + (unit*unit*unit);
        num = num /10;
    }
    if(copy==sum){
        cout<<"Given number is Armstrong";
    }else{
        cout<<"Given number is not Armstrong";
    }
    return 0;
} 