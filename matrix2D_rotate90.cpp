#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the no of row and coloum:-";
    cin>>r;
    c=r;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << "Enter the [" << i << "][" << j << "] :- ";
            cin>>arr[i][j];
        }
    }
    cout<<"Your 2D matrix is:-";
    cout<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
     cout << "Matrix transposed mstrix:\n";
    for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){
           swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << "Matrix roted  matrix:\n";
    for(int i=0;i<r;i++){
        int right = c-1;
        int left = 0;
        while (left<right)
        {
            swap(arr[i][left],arr[i][right]);
            left++;
            right--;
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}