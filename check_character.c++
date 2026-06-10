#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character:-";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"Uppercase";
    }else if(ch>='a' && ch<='z'){
        cout<<"Lowercase";
    }else{
        cout<<"Spacial character!";
    }
    return 0;  
}