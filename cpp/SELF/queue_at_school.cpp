#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, t; cin >> n >> t;
	char q[n];
	for(char &ch: q) cin >> ch;

	while(t--){
		int pos = 0;
		while(pos < n){
			if(q[pos] == 'B' and q[pos+1] == 'G'){
				swap(q[pos], q[pos+1]);
				pos++;
			}
			pos++;
		}
	}

	for(char ch: q) cout << ch;

	cout << endl;
}
