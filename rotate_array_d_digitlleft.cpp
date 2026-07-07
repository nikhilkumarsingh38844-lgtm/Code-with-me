#include <bits/stdc++.h>
using namespace std;
void left_Rotate(int arr[],int n,int d){
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

}
int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element[" << i << "]";
        cin >> arr[i];
    }
    cout<<"Your array is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int d;
    cout<<endl;
    cout<<"Enter the number which u want till rotate:";
    cin>>d;
    left_Rotate(arr,n,d);
    cout<<endl;
    cout<<"Your rotate array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}