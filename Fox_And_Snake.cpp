#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	char a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(i%2==0)
				a[i][j] = '#';
			else
				a[i][j] = '.';
		}
	}
	for(int i=1; i<n; i+=2){
		if(i%4 == 1)
			a[i][m-1] = '#';
		else
			a[i][0] = '#';
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout << a[i][j];
		}
		cout << endl;
	}

	return 0;
}