#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter the first number:-";
    cin>>num1; 
    cout<<"Enter the secound number:-";
    cin>>num2;
    cout<<"Enter the third number:-";
    cin>>num3;
    if(num1>num2 && num1>num3){
        cout<<"Given number "<<num1 <<" is Largest";
    }else if(num2>num1 && num2>num3){
        cout<<"Given number "<<num2 <<" is Largest";
    }else {
        cout<<"Given number "<<num3 <<" is Largest";
    }
    return 0;
}