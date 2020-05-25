#include<iostream>

using namespace std;

int countLuckyDigits(int n, int a, int b){
	int count = 0;
	while(n>0){
		if(n%10 == a || n%10 == b)
			count++;
		n = n/10;
	}
	return count;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	int ans = 0;
	for(int i=0 ; i<n; i++){
		int a;
		cin >> a;

		if (countLuckyDigits(a,4,7) <= k)
			ans++;
	}
	cout << ans;
	return 0;
}