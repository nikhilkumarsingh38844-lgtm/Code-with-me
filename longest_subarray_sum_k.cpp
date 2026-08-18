#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSum(vector<int> a, long long k) {
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();

    while (right < n) {

        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;

        if (right < n) {
            sum += a[right];
        }
    }

    return maxLen;
}

int main() {
    int n;
    
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long k;
    cout << "Enter target sum k: ";
    cin >> k;

    int result = longestSubarrayWithSum(a, k);

    cout << "Longest subarray length = " << result << endl;

    return 0;
}