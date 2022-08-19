#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string solve(vector<pair<ll, ll>> v, ll s) {
	ll res = s;
	for (auto p : v) {
		if (res > p.first) {
			res += p.second;
		} else {
			return "NO";
		}
	}

	return "YES";
}

int main() {
	vector<pair<ll, ll>> v1;
	ll s, n;

	pair<ll, ll> tmp;
	ll x_i, y_i;
	cin>>s>>n;

	for (ll i = 0; i < n; i++) {
		cin>>x_i>>y_i;
		v1.push_back(make_pair(x_i, y_i));
		sort(v1.begin(), v1.end());
	}

	cout<<solve(v1, s)<<endl;
}
