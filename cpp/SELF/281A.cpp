#include <iostream>
#include <cctype>

using namespace std;

int main() {
	string str; cin >> str;

	if(str[0] >= 97){
		str[0] = toupper(str[0]);
	}

	cout << str << endl;
}