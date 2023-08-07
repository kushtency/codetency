#include <bits/stdc++.h>

using namespace std;

int main() {
	string str; cin >> str;
	vector<int> code;


	for(int pos = 0; pos < str.size(); pos++){
		if(str[pos] == '.'){
			code.push_back(0);
		}
		if(str[pos] == '-' and str[pos+1] == '.'){
			code.push_back(1); pos++;
		}
		if(str[pos] == '-' and str[pos+1] == '-'){ 
			code.push_back(2); pos++;
		}
	}

	for(auto it: code) cout << it;
	cout << endl;
}