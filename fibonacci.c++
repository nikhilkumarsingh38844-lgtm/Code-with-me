#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number upto which serier should be printed:";
    cin>>n;
    int first=0,secd=1,next;
    for(int i=0;i<n;i++){
        cout<<first <<" ";
        next=first+secd;
        first = secd;
        secd = next;
    }
}