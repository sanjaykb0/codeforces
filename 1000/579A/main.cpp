#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
using ll = long long;

int main() {
	int_fast32_t x; cin>>x;
	int_fast32_t t = 1;
	int_fast32_t count = 0;

	while (x / 2 != 0) {
		if (x % 2 == 1) {
			count++;
		}
		x /= 2;
	}

	cout<<count + 1<<endl;
}
