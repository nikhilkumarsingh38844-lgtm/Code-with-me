#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number up to which you will get the prime number:-";
    cin>>num;
    for(int i=2;i<=num;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            cout<<i <<" ";
        }
    }
    return 0;  
}