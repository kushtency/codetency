#include <bits/stdc++.h>

using namespace std;

int main() {
	int mat[5][5];
	int ans = 0;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> mat[i][j];
			if(mat[i][j] == 1){
				ans = abs(i-2) + abs(j-2);
			}
		}
	}
	cout << ans << endl;
}