#include<bits/stdc++.h>
using namespace std;
bool is_sorted(int n, int arr[]){
    for(int i=0;i<=n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){      
    int n; 
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n]; 
    for(int i=0;i<=n-1;i++){ 
        cout<<"Enter the element["<<i<<"]:";
        cin>>arr[i];
    }
    cout<<"Your array is:-";
    for(int i=0;i<=n-1;i++){    
        cout<<arr[i]<<" ";
    } 
    if(is_sorted(n,arr)){
        cout<<"Given array is sorted!";
    }else{
        cout<<"Given array is not sorted!";
    }
}