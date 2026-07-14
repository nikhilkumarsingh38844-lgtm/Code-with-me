#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element["<<i<<"]:";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int ans=0; 
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<"Element appearing only once:"<<ans;
    return 0;
}