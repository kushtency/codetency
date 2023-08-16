#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
	vector<int> v(n);
	int cnt = 1;
	for(int &num: v){
		num = cnt; cnt++;
	}
	for(int i = 0; i < v.size()-1; i+=2) swap(v[i], v[i+1]);
	for(int num: v) cout << num << " ";
}

int main() {
	int n; cin >> n;
	if(n == 1 or n%2 == 1){
		cout << -1;
	}else{
		solve(n);
	}
}