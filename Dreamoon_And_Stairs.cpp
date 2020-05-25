#include<iostream>

using namespace std;

// The first number in the range [(n+1)/2, n] that divides k is the answer. 

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	if(m>n)
		cout << -1 << endl;
	else{
		int min_moves = (n+1)/2;
		if(min_moves%m == 0)
			cout << min_moves;
		else
			cout << min_moves + (m - min_moves%m);
	}
	return 0;
}