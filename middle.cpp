#include<bits/stdc++.h>
using namespace std;
int middle(int arr[],int n){
    return arr[n/2];
    }
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element["<<i<<"]: ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    if(n%2==1)cout<<"Middle element :"<<middle(arr,n);
    else{
        cout<<"Middle element :"<<arr[n/2];
    }
    return 0;
}