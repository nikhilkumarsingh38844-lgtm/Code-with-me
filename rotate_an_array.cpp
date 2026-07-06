#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n,int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
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
    int d;
    cout<<"Enter the number which u want till rotate:";
    cin>>d;
    cout<<"Your array is:-";
    for(int i=0;i<=n-1;i++){    
        cout<<arr[i]<<" ";
    } 
    leftRotate(arr,n,d);
    cout<<endl;
    cout<<"Here is your rotate array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}