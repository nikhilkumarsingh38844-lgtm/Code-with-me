#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cout<<"Enter the element["<<i<<"]:";
        cin>>arr[i];
    }
    int sum = n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        sum=sum-arr[i];
    }
    cout<<sum;
    return 0;
}