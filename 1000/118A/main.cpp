#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    for (auto ch : s) {
        ch = tolower(ch);
        switch (ch) {
            case 'a':
                break;
            case 'e':
                break;
            case 'i':
                break;
            case 'o':
                break;
            case 'u':
                break;
            case 'y':
                break;
            default:
                cout<<"."<<ch;
                break;
        }
    }
}

int main() {
    string s;
    cin>>s;
    solve(s);
    cout<<endl;
}