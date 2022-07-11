#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<string> solve(vector<string> v1) {
    string tmp;
    string *reference_to;
    for (vector<string>::iterator x = v1.begin(); x != v1.end(); x++) {
        size_t len = x->length();
        if (len > 10) {
            tmp = x->front() + to_string(len - 2) + x->back();
            *x = tmp;
        }
    }
    return v1;
}

int main() {
    int n;
    string tmp;
    cin>>n;
    vector<string> v1(n);
    for (int i = 0; i < n; i++) {
        cin>>v1[i];
    }

    vector<string> res = solve(v1);
    for (auto x : res) {
        cout<<x<<endl;
    }
}