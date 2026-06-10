#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter the number";
    cin>>num;
    if(num<=1){
        cout<<"Not a prime number!";
    }else{
        for(int i=1;i<=num;i++){
           if (num%i==0){ 
            count++;
           }
        }
    if(count==2){
        cout<<"prime number!";
    }else{
        cout<<"Not prime number";
    }
    return 0;
}
}