#include <bits/stdc++.h>
using namespace std;

int main() {
    int tmp;
    int axes[2];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin>>tmp;
            if (tmp == 1) {
                axes[0] = i;
                axes[1] = j;
            }
        }
    }
    cout<<abs(axes[0] - 2) + abs(axes[1] - 2)<<endl;
}
