#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(vector<ll> v1, ll n) {
	ll res = 0;
	for (ll i = 0; i < v1.size() - 1; i++) {
		if (i == 0) {
			res += v1[i] - 1;
		}

		if (v1[i+1] > v1[i]) {
			res += v1[i + 1] - v1[i];
		}

		if (v1[i+1] < v1[i]) {
			res += (n - v1[i]) + v1[i + 1];
		}
	}
	return res;
}

int main() {
	ll n, m, tmp;
	vector<ll> v1;
	cin>>n>>m;
	
	for (ll i = 0; i < m; i++) {
		cin>>tmp;
		v1.push_back(tmp);
	}

	cout<<solve(v1, n)<<endl;
}
