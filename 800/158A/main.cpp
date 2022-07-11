#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, tmp;
    int res = 0;
    int brk = 0;
    cin>>n>>k;
    vector<int> v1(n);
    for (int i = 1; i <= n; i++) {
        cin>>tmp;

        if (tmp <= 0) {
            break;
        }

        res++;
        if (i >= k && tmp >= brk ) {
            brk = tmp;
        } else if (tmp < brk) {
            res--;
            break;
        }
    }
    cout<<res<<endl;
}
