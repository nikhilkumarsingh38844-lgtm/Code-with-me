#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Entert the number:-";
    cin>>n;
    int sum=0;
    while (n>0)
    {
        int lastDigit =n%10;
        sum =sum+lastDigit;
        n =n/10;
    }
    cout<<sum;
    return 0;
    
}