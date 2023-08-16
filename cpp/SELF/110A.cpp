#include <iostream>
#include <vector>

using namespace std;

bool solve() {
	long long dgt; cin >> dgt;
	vector<int> dgts;

	while(dgt > 0){
		dgts.push_back(dgt%10);
		dgt /= 10;
	}
	if(dgts.size() == 1) return false;
	int i; int cnt = 0;
	for(i = 0; i < dgts.size(); i++){
		if(dgts[i] == 4 or dgts[i] == 7) cnt++;
	}

	return (cnt == 4 or cnt == 7);

}

int main() {
	cout << ((solve()) ? "YES" : "NO" )<< endl;
}