#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	int a[m];
	for(int i= 0; i<m; i++)
		cin >> a[i];
	sort(a,a+m);
	
	int min = 2000;
	for(int i=0; i<m-n+1; i++){
		if(abs(a[i] - a[i+n-1]) < min){
			min = abs(a[i]-a[i+n-1]);
		}
	}
	cout << min << endl;
	return 0;
}