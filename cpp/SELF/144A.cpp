#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	int q[n];
	for(int &i: q) cin >> i;
	
	int mx = n-1; int mn = 0;
	for(int i=0; i < n; i++)
		if(q[i] <= q[mn]) mn = i;

	for(int i=n-1; i >= 0; i--)
		if(q[i] >= q[mx]) mx = i;

	int ans = abs(mx) + abs(mn - (n-1));
	cout << ((mx > mn) ? ans-1 : ans) << endl;
}