#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	if(n&1 or n==2)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}