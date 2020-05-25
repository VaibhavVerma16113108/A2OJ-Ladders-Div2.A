#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int m, n;
	cin >> m >> n;
	int moves = 0;
	while(m>0 and n>0){
		moves++;
		m--; n--;
	}
	if(moves&1) cout << "Akshat";
	else cout << "Malvika";
	return 0;
}