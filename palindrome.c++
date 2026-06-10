#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number";
    cin>>num;
    int copy = num;
    while(num>0){
        int unit = num % 10;
        sum =sum * 10+ unit;
        num = num / 10;
    }
    if(sum==copy){
        cout<<"Given number is Palindrome";
    }else{
        cout<<"Given number is not Palindrome";
    } 
    return 0;
}