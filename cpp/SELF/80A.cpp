#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
	for(int num = 2; num*num <= n; num++){
		if(n%num == 0) return false;
	}
	return true;
}

int nextPrime(int n){
	for(int i = n+1; i <= 50; i++){
		if(isPrime(i)) return i;
	}
}

int main() {
	int n, m; cin >> n >> m;
	if(isPrime(n)){
		int nxt = nextPrime(n);
		if(nxt == m){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}