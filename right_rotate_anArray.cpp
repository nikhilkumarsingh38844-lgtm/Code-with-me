#include<bits/stdc++.h>
using namespace std;
void rightRotate(int arr[],int n,int d){
    d=d%n;
    reverse(arr+n-d,arr+n);
    reverse(arr,arr+n-d);
    reverse(arr,arr+n);
}
int main(){
    int n;
    cout<<"Entyer the size of an array:";
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
    cout<<endl;
    int d;
    cout<<"Enter the number till which u want to rotate right:";
    cin>>d;
    rightRotate(arr,n,d);
    cout<<"Your rotate array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}