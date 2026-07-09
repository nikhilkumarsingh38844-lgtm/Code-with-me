#include<bits/stdc++.h>
using namespace std;
int rev(int arr[],int n){
    int i=0;
    int j=n-1;
    while (i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;    
    }
}
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element["<<i<<"]: ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    rev(arr,n);
    cout<<"There are reverse array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}