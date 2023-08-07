#include<bits/stdc++.h>

using namespace std;

int main() {
	int n; int r; cin >> n >> r;
	char q[n];
	for(char &c: q) cin >> c;

	while(r--){
		for(int i = 0; i < n; i++){
			if(i+1 < n and (q[i] == 'B' and q[i+1] == 'G')){
				swap(q[i], q[i+1]);
				i++;
			}
		}
	}

	for(char c: q) cout << c;
	
}