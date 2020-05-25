#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int a = n%10;
	if(n>0){
		int ans = max(max(n,n/10),(n/100)*10 + a);
		cout << ans << endl;
	}
	else{
		n = abs(n);
		int ans = min(min(n,n/10),(n/100)*10 - a);
		cout << ans*(-1) << endl;
	}
	return 0;
}