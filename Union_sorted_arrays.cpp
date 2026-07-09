#include<bits/stdc++.h>
using namespace std;

int main() {

    int n1;
    cout << "Enter the size of first array: ";
    cin >> n1;

    int arr1[n1];
    for(int i = 0; i < n1; i++) {
        cout << "Enter the element[" << i << "]: ";
        cin >> arr1[i];
    }

    int n2;
    cout << "Enter the size of second array: ";
    cin >> n2;

    int arr2[n2];
    for(int i = 0; i < n2; i++) {
        cout << "Enter the element[" << i << "]: ";
        cin >> arr2[i];
    }

    set<int> st;

    for(int i = 0; i < n1; i++)
        st.insert(arr1[i]);

    for(int i = 0; i < n2; i++)
        st.insert(arr2[i]);

    int result[st.size()];
    int index = 0;

    for(auto it : st) {
        result[index++] = it;
    }

    cout << "Union of arrays: ";
    for(int i = 0; i < index; i++) {
        cout << result[i] << " ";
    }

    return 0;
}