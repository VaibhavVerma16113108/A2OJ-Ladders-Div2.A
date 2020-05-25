#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int r1,c1,r2,c2;
	cin >> r1 >> c1 >> r2 >> c2;
	// For rook
	if(r1 == r2 or c1 == c2) cout << 1 << " ";
	else cout << 2 << " ";

	// For Bishop
	if((r1 + c1)%2 != (r2 + c2)%2) cout << 0 << " ";
	else{
		if(r1 + c1 == r2 + c2 or r1 - c1 == r2 - c2) cout << 1 << " ";
		else cout << 2 << " ";
	}
	// For king
	cout << max(abs(r1-r2), abs(c1-c2));
	
	return 0;
}