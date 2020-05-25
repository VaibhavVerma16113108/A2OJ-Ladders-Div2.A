#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, v;
	cin >> n >> v;
	int a[n] = {0};
	int count = 0;
	for(int i=0; i<n; i++){
		int sellerItems;
		cin >> sellerItems;
		for(int j=0; j<sellerItems; j++){
			int price;
			cin >> price;
			if(v > price){
				a[i]++;
			}
		}
	}
	for(int i=0; i<n; i++){
		if(a[i] > 0){
			count++;
		}
	}
	cout << count << endl;
	for(int i=0; i<n; i++){
		if(a[i] > 0){
			cout << i+1 << " ";
		}
	}
	return 0;
}