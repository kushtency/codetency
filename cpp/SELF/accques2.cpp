#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, a, b, c; cin >> n >> a >> b >> c;
	int rem, k;
	int ans = 0;
	for (int i = 0; i * a <= n; ++i){
		for (int j = 0; i * a + j * b <= n; ++j){
			rem = n - i * a - j * b;
			if (rem % c == 0){
				k = rem / c;
				ans = max(ans, i + j + k);
			}
		}
	}
	cout << ans << endl;
}