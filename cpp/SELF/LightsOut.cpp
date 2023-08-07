#include <bits/stdc++.h>

using namespace std;

int main() {
	bool lights_on[4][4];
	int mat[3][3];

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)	lights_on[i][j] = true;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> mat[i][j];
		}
	}

	// switch untill count of Aij is not zero
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			while (mat[i][j] != 0) {
				lights_on[i][j] = !lights_on[i][j];
				lights_on[i + 1][j] = !lights_on[i + 1][j];
				lights_on[i - 1][j] = !lights_on[i - 1][j];
				lights_on[i][j + 1] = !lights_on[i][j + 1];
				lights_on[i][j - 1] = !lights_on[i][j - 1];
				mat[i][j]--;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) cout << lights_on[i][j];
		cout << endl;
	}
}