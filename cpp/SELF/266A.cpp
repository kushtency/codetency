#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	char stn[n];

	for(char &ch: stn) cin >> ch;

	int cnt = 0;
	for(int i = 0; i < n-1; i++){
		if(i < n and stn[i] == stn[i+1]){
			cnt++;
		}
	}
	cout << cnt << endl;
}