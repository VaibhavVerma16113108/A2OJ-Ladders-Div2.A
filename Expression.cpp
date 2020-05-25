#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,b,c;
	cin >> a >> b >> c;
	int ans = max(max(a+b+c, a*b+c), max(max(a+b*c, a*(b+c)), max((a+b)*c, a*b*c)));
	cout << ans;
	return 0;
}