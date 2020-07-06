#include <bits/stdc++.h>

using namespace std;

long long n, b, m, ans;

void test_case() {
	cin >> n >> b >> m;
	ans = 0;
	while(n) {
		int p = (n + 1) / 2;
		ans += p * m;
		n -= p;
		if(n) {
			ans += b;
		}
		m *= 2;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		test_case();
	}
	return 0;
}
