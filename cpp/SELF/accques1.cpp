#include <bits/stdc++.h>

using namespace std;


int solve(int arr[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(arr[i]%3 == 0 and arr[i]%2 == 0){
			sum += arr[i];
		}
	}
	return sum/n;
}

int main(){
	int n; cin >> n;
	int arr[n];
	for(int &c: arr)	cin >> c;
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(arr[i]%3 == 0 and arr[i]%2 == 0){
			sum += arr[i];
		}
	}
	cout << sum/n;
}