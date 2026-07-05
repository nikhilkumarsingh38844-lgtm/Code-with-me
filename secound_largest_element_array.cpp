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
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }
    
         else if(arr[i]>secondLargest && arr[i]!=largest){
        secondLargest=arr[i];
        }
    }   
    cout<<endl;
    cout<<"Secound largest element is :"<<secondLargest;
    return 0;
}