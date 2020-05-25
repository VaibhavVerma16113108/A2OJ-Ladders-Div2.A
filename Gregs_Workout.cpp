#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int muscles[3] = {0}; // back,chest,biceps
	string parts[3] = {"back", "chest", "biceps"};

	for(int i=1; i<=n; i++){
		int a;
		cin >> a;
		muscles[i%3] += a;
	}
	cout << parts[max_element(muscles, muscles+3) - muscles];
	return 0;
}