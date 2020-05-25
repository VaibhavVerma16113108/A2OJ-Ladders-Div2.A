#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int left = 0; int right = 0; int parity = 0;
	int counter = 0;
	for(int i=0; i<n; i++){
		int a, b;
		cin >> a >> b;
		a %= 2; b %= 2;
		left += a; right += b; parity += (a!=b);
	}
	if(left%2 != right%2) cout << -1;
	else if(left%2 == 0) cout << 0;
	else if(parity==0) cout <<-1;
	else cout << 1;

	return 0;
}