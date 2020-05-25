#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, a, b;
	cin >> n >> m >> a >> b;

	int min = 1000000;
	int cost = 0;
	int i = 0;
	while(i*m <= n){
		cost = i*b + (n-m*i)*a;
		if(cost<min)
			min = cost;
		i++;
	}
	if(i*b < cost)
		min = i*b;
	cout << min;

	return 0;
}