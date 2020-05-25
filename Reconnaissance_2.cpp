#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int soldiers[n];
	for(int i=0; i<n; i++)
		cin >> soldiers[i];

	int min = abs(soldiers[n-1] - soldiers[0]);
	int index = 0;
	for(int i = 1; i<n; i++){
		if(abs(soldiers[i]-soldiers[i-1])<min){
			min = abs(soldiers[i]-soldiers[i-1]);
			index = i;
		}
	}
	if(index==0) cout << n << " " << 1;
	else cout << index << " " << index+1;
	return 0;
}