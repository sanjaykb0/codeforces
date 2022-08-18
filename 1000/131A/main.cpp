#include <bits/stdc++.h>
#include <cctype>
using namespace std;
using ll = long long;

string flipCase(string s) {
	string res = "";
	for (auto ch : s) {
		res += (ch == tolower(ch) ? toupper(ch) : tolower(ch));
	}
	return res;
}

bool testUppercase(string str) {
	for (auto ch : str) {
		if ((int) ch > 90 || (int) ch < 65) {
			return false;
		}
	}
	return true;
}



string solve(string str) { // returns true if the string does not cointain accidental caps
	const ll len = str.length();

	if (len == 1) {
		return flipCase(str);
	}

	string res = "";

	const string re_1_arg = "[a-z][A-Z]{" + to_string(len - 1) + "}";
	const string re_2_arg = "[A-Z]+{" + to_string(len) + "}";

	if (tolower(str[0]) == str[0] && testUppercase(str.substr(1))) {
		return flipCase(str);
	} else if (testUppercase(str)) {
		return flipCase(str);
	}

	return str;
}



int main() {
	string n;
	cin>>n;

	cout<<solve(n)<<endl;

}
