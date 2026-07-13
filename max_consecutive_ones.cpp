#include<bits/stdc++.h>
using namespace std;
int maximum(int arr[],int n){
    int maxi=0,count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxi=max(maxi,count);
        }else{
            count=0;
        }
    }
    return maxi;
}
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
    cout<<"maximum is:"<<maximum(arr, n);

}