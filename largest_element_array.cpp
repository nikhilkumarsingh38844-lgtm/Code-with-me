#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the size of Array:";
    cin>>n;
    int arr[n]; 
    for(int i=0;i<=n-1;i++){
        cout<<"Enter the element["<<i<<"]:-";
        cin>>arr[i];
    }
    cout<<"Your array is:-";
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    int large = arr[0];
    for(int i=0;i<n-1;i++){
        if(large<arr[i]){
            large=arr[i];
        }
    }
    cout<<endl;
    cout<<"Largest element of array is :-"<<large;
    return 0;
}