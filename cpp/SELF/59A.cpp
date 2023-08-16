#include <iostream>
#include <cctype>

using namespace std;

int main() {
	string str;	cin >> str;

	int cnt_up = 0; int cnt_lo = 0;

	for(int i = 0; i < str.size(); i++){
		if(str[i] >= 'a') cnt_lo++;
		if(str[i] < 'a') cnt_up++;
	}
	for(int i = 0; i < str.size(); i++){
		if(cnt_lo >= cnt_up){
			str[i] = tolower(str[i]);
		}else{
			str[i] = toupper(str[i]);
		}
	}

	cout << str;
}