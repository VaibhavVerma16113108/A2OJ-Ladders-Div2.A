#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j) cout << k-n+1 << " ";
			else cout << 1 << " ";
		}
		cout << endl;
	}
	return 0;
}