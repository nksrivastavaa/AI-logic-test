#include <bits/stdc++.h>
using namespace std;

int len_longest_substring(string s) {
    vector<int> lastIndex(256, -1);
    int mxlen = 0, l = 0;
    for (int r = 0; r < (int) s.size(); r++) {
        if (lastIndex[s[r]] >= l) {
            l = lastIndex[s[r]] + 1;
        }
        lastIndex[s[r]] = r;
        mxlen = max(mxlen, r - l + 1);
    }
    return mxlen;
}

int main() {
    string s;
    cin >> s;
    cout << len_longest_substring(s) << endl;
    return 0;
}