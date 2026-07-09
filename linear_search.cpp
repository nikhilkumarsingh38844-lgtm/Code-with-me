#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
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
    cout<<"Your array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int num;
    cout<<"Which number do you find as a array index:";
    cin>>num;
    cout<<"Your number index is:"<<linearSearch(arr,n,num);
    return 0;
}