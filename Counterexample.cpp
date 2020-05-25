#include<iostream>

using namespace std;

#define ull unsigned long long int
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	ull l, r;
	cin >> l >> r;
	if(r-l >= 3)
		if(l%2 == 0)
			cout << l << " " << l+1 << " " << l+2;
		else
			cout << l+1 << " " << l+2 << " " << l+3;
	else if (r-l <= 1)
		cout << -1;
	else
		if(l%2 == 0)
			cout << l << " " << l+1 << " " << l+2;
		else
			cout << -1;

	return 0;
}