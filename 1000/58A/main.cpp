#include <bits/stdc++.h>
#include <regex>
#include <unordered_set>
using namespace std;
using ll = long long;

bool solve(string inputText) {
    regex re_expr("h.*e.*l.*l.*o.*");
    smatch matches;

    regex_search(inputText, matches, re_expr);
    if (matches.length() > 0) {
        return true;
    } 
    return false;
}

int main() {
    string userInput;
    cin>>userInput;

    if (solve(userInput)) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}