#include <bits/stdc++.h>

using namespace std;

int main() {
	string num1, num2; cin >> num1 >> num2;
	string ans;

	for(int i = 0; i < num1.size(); i++){
		int a = num1[i] - '0'; int b = num2[i] - '0';
		ans.push_back((a^b)?'1':'0');
	}
	cout << ans;
}