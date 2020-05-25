#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	int n;
	cin >> n;
	bool ans = false;
	for(int i=0; i<14; i++){
		if(n%a[i] == 0){
			ans = true;
			break;
		}
	}
	if(ans) cout << "YES";
	else cout << "NO";
	return 0;
}