#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int solve(string a, string b) {
    if (a == b) {
        return 0;
    }

    if (a < b) {
        return -1;
    }

    if (a > b) {
        return 1;
    }
}

int main() {
    vector<string> inp(2);
    int res = 0;
    for (int i = 0; i < 2; i++) {
        cin>>inp[i];
        transform(inp[i].begin(), inp[i].end(), inp[i].begin(), ::tolower);
    }

    cout<<solve(inp[0], inp[1])<<endl;
}