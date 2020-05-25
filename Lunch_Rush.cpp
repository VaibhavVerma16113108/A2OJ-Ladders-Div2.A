#include<iostream>
#include<climits>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	int max = INT_MIN;
	for(int i=0; i<n; i++){
		int joy = 0;
		int f, t;
		cin >> f >> t;
		if(t>k)
			joy = f - t + k;
		else
			joy = f;
		if(joy > max)
			max = joy;

	}
	cout << max;
	return 0;
}