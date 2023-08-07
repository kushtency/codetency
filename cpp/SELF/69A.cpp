#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	int m[n][3];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++) cin >> m[i][j];
	}
	int x, y, z; x = y = z = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			if(j == 0){ x+=m[i][j]; }
			else if(j == 1){ y+=m[i][j]; }
			else { z+=m[i][j]; }
		}
	}
	if(x == 0 and y == 0 and z == 0) cout << "YES" << endl;
	else cout << "NO" << endl;

}