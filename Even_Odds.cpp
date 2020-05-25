#include<iostream>
#define ll long long int
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n,k;
	cin >> n >> k;
	if(k <= (n+1)/2)
		cout << 2*k - 1;
	else
		cout << 2*(k-(n+1)/2);
	return 0;
}