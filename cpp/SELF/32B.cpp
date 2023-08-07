#include <bits/stdc++.h>

using namespace std;

int main() {
	string str; cin >> str;
	string ans;
	for(int i = 0; i < str.size(); i++){
		if(str[i] == '.'){ ans.push_back('0'); }
		else if(i+1 < str.size() and (str[i] == '-' and str[i+1] == '.')){ ans.push_back('1'); i++; }
		else if(i+1 < str.size() and (str[i] == '-' and str[i+1] == '-')){ ans.push_back('2'); i++; }
	}

	cout << ans << endl;
}
