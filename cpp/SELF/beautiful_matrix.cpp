#include<bits/stdc++.h>

using namespace std;

int main() {
	int mat[5][5]{0};

	int idx, idy;
	idx = idy = -1;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> mat[i][j];
			if(mat[i][j] == 1){
				idx = i; idy = j;
			}
		}
	}

	int ans = abs(idx - 2) + abs(idy - 2);
	cout << ans << endl;
}