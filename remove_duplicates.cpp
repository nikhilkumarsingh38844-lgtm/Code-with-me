#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Please enter the size of an array:";
    cin>>n;
    cout<<"Please enter the sorted array!";
    cout<<endl;
    int arr[n];
    for(int i=0;i<=n-1;i++){ 
        cout<<"Enter the element["<<i<<"]:";
        cin>>arr[i];
    }
    cout<<"Your array is:-";
    for(int i=0;i<=n-1;i++){    
        cout<<arr[i]<<" ";
    } 
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    cout<<endl;
    cout<<"After the remove duplicated element in an array:";
    for(int k=0;k<=i;k++){
        cout<<arr[k]<<" "; 
    }
    return 0;
} 