#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool solve(string input) {
    ll tmp = stoi(input);

    set<char> idealSet;
    set<char> resultSet;
    vector<ll> modList = {4, 44, 47, 444, 447, 474, 7, 77, 74, 777, 774, 747};

    idealSet.insert('4');
    idealSet.insert('7');

    for (ll mod : modList) {
        if (tmp % mod == 0) {
            return true;
        }
    }

    for (auto ch : input) {
        resultSet.insert(ch);
   }

    if (idealSet == resultSet) {
        return true;
    }

    return false;
}

int main() {
    string testCase;
    cin>>testCase;


    if (solve(testCase)) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}