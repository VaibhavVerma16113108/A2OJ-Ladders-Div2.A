#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int ans = 0;
	for(int i=0; i<n; i++){
		ans = gcd(a[i], ans);
	}
	cout << ans*n << endl;
	return 0;
}