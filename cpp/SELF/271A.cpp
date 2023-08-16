#include <iostream>

using namespace std;

bool has_common(int n){
	int arr[4]{0};
	int ptr = 0;
	while(n > 0){
		arr[ptr] = n%10;
		n /= 10;
		ptr++;
	}
	for(int i = 0; i < 4; i++){
		for(int j = i+1; j < 4; j++){
			if(arr[i] == arr[j]) return true;
		}
	}

	return false;
}

int main() {
	int n; cin >> n;
	int ans = n+1;
	while(has_common(ans)){
		ans += 1;
	}
	cout << ans << endl;
}