#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, d;
	cin >> n >> d;
	int songs[n];

	int sum_songtime = 0;
	for(int i=0; i<n; i++){
		cin >> songs[i];
		sum_songtime += songs[i];
	}
	if(sum_songtime + (n-1)*10 > d)
		cout << -1 << endl;
	else{
		int numJokes = 2*(n-1);
		int ans = (d-sum_songtime-10*(n-1))/5;
		cout << numJokes + ans;
		}
	

	return 0;
}