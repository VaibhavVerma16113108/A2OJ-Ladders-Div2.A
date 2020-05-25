#include<iostream>

using namespace std;


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin >> a >> b;

	int wins = 0; int draws = 0; int losses = 0;
	for(int i=1; i<=6; i++){
		if(abs(a-i) < abs(b-i))
			wins++;
		else if(abs(a-i) > abs(b-i))
			losses++;
		else
			draws++;
	}
	cout << wins << " " << draws << " " << losses;

	return 0;
}