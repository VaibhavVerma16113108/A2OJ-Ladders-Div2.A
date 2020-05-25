#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

	bool test = true;

	for(int i=1; i<10; i++){
		for(int j=1; j<10; j++){
			for(int k=1; k<10; k++){
				for(int l=1; l<10; l++){
					if(i+j == r1 and k+l == r2 and i+k == c1 and j+l == c2 and i+l == d1 and j+k == d2){
						if(i==j or i==k or j==k or i==l or j==l or k==l){
							test = false;
						}
						else{
							cout << i << " " << j << endl;
							cout << k << " " << l << endl;
							return 0;
						}
					}
				}
			}
		}
	}
	test = false;
	if(test == false) cout << -1;
	return 0;
}