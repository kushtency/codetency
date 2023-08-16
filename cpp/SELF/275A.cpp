#include <iostream>

using namespace std;

int main() {
	int lights[5][5];
	int ans[5][5];

	for(int i = 1; i <= 3; i++){
		for(int j = 1; j <= 3; j++){
			cin >> lights[i][j];
			ans[i][j] = 0;
		}
	}

	for(int i = 1; i <= 3; i++){
		for(int j = 1; j <= 3; j++){
			int state = lights[i][j];
			ans[i][j] += state;
			ans[i][j-1] += state;
			ans[i+1][j] += state;
			ans[i-1][j] += state;
			ans[i][j+1] += state;
		}
	}

	for(int i = 0; i <= 3; i++){
		for(int j = 0; j <= 3; j++){
			if(ans[i][j]%2 == 0){ ans[i][j] = 1; }
			else{ ans[i][j] = 0; }
		}
	}

	for(int i = 1; i <= 3; i++){
		for(int j = 1; j <= 3; j++) cout << ans[i][j];
		cout << endl;
	}
}