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
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    cout<<endl;
    for(auto it:mp){
        if(it.second==1){
            cout<<"Once time appears number is:"<<it.first;
        }
    }
    return 0;
}