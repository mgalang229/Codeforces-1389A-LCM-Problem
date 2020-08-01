#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	for (int qq = 1; qq <= tt; qq++) {
		int l, r;
		cin >> l >> r;
		if (2 * l > r) {
			cout << -1 << ' ' << -1;
		} else {
			cout << l << ' ' << 2 * l;
		}
		cout << '\n';
	}
	return 0;
}
