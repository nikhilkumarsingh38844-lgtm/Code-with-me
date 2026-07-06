#include<bits/stdc++.h>
using namespace std;
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
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    cout<<endl;
    cout<<"Your rotate array is:-";
    for(int i=0;i<=n-1;i++){    
        cout<<arr[i]<<" ";
    }
    return 0;
}