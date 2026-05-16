#include <bits/stdc++.h>
using namespace std;

void next_permutation(vector<int>& nums) {
    int n = (int) nums.size(), i = n - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) i--;
    if (i >= 0) {
        int j = n - 1;
        while (nums[j] <= nums[i]) j--;
        swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    next_permutation(nums);
    for (int i = 0; i < n; i++) cout << nums[i] << " ";
    cout << endl;
    return 0;
}