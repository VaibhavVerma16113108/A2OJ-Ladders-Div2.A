#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] += k;
	}
	sort(a,a+n);
	int ans = 0;
	int i= 2;
	while(a[i] <= 5 and i < n){
		ans++;
		i+=3;
	}
	cout << ans;

	return 0;
}