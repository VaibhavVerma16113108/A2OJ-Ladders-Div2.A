#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int people[n];
	for(int i=0; i<n; i++){
		cin >> people[i];
	}
	int ans = 100000000;
	for(int i=0; i<n; i++){
		int time = 0;
		for(int j=0; j<people[i]; j++){
			int items;
			cin >> items;
			time = time + items*5 + 15;
		}
		ans = min(ans, time);
	}
	cout << ans;
	return 0;
}