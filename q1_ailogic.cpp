#include <bits/stdc++.h>
using namespace std;

int find_min(vector<int>& nums) {
    int l = 0, r = (int) nums.size() - 1;
    while (l < r) {
        int m = l + (r - l) / 2;
        if (nums[m] > nums[r]) {
            l = m + 1;
        } else r = m;
    }
    return nums[l];
}

int main() {
    int n; // len of array for input
    cin >> n;
    vector<int> nums(n); // input array
    for (int i = 0; i < n; i++) cin >> nums[i];
    cout << find_min(nums) << endl;
}