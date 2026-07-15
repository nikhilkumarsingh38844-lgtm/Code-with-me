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
    cout<<"Your array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            arr[i]=-arr[i];
        }
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr[i]=-arr[i];
        }
    }
    cout<<endl;
    cout<<"All odd are in descending order and all even are in ascending order:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}