#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	sort(a,a+n);

	int sumArray = 0;
	for(int i=0; i<n; i++)
		sumArray += a[i];
	int total = 0;
	int numCoins = 0;
	for(int j=n-1; j>=0; j--){
		total += a[j];
		sumArray -= a[j];
		numCoins++;
		if(total > sumArray)
			break;
	}
	cout << numCoins << endl;

	return 0;
}