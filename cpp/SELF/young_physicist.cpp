#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	int arr[t][3] {0};

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}

	int sumx, sumy, sumz;
	sumx = sumy = sumz = 0;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 3; j++) {
			if (j == 0) sumx += arr[i][j];
			if (j == 1) sumy += arr[i][j];
			if (j == 2) sumz += arr[i][j];
		}
	}
	if(sumx == 0 and sumy == 0 and sumz == 0){
		cout << "YES";
	}else{
		cout << "NO";
	}

}