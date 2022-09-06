#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll a, b, c;
	cin>>a>>b;
	c = a;

	while (a >= b) {
		c += (a / b);
		a = (a / b) + (a % b);
	}

	cout<<c<<endl;
}
