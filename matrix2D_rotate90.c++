#include<iostream>
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

    cout << "Matrix rotate 90 degree anticlockwise rotation:\n";
    for(int j = c - 1; j >= 0; j--) {
        for(int i = 0; i < r; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}