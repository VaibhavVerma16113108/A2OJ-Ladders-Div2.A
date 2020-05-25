#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int y,k,n;
	cin >> y >> k >> n;
	int a = k-y%k;
	int count = 0;
	for(int i=a; i<=n-y; i+=k){
		cout << i << " ";
		count++;
	}
	if(!count) cout << -1;
	return 0;
}