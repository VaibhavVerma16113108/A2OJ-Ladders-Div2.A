#include<iostream>
#define ll long long int
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int k; ll n;
	cin >> k >> n;
	int imp = 0;
	while(n>1){
		if(n%k != 0)
			break;
		n = n/k;
		imp++;
	}
	if(n==1){
		cout <<"YES"<<endl;
		cout << imp-1;
	}
	else cout << "NO";

	return 0;
}