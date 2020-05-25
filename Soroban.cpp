#include<iostream>

using namespace std;

void soroban(int n){
	if(n>=5){
		cout << "-O|";
		if(n%5==0) cout << "-OOOO";
		else if(n%5==1) cout <<"O-OOO";
		else if(n%5==2) cout <<"OO-OO";
		else if(n%5==3) cout <<"OOO-O";
		else cout <<"OOOO-";
	}
	else{
		cout << "O-|";
		if(n%5==0) cout << "-OOOO";
		else if(n%5==1) cout <<"O-OOO";
		else if(n%5==2) cout <<"OO-OO";
		else if(n%5==3) cout <<"OOO-O";
		else cout <<"OOOO-";
	}
	
	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	if(n==0){
		cout << "O-|-OOOO";
		return 0;
	}
	while(n>0){
		soroban(n%10);
		cout << endl;
		n = n/10;
	}
	return 0;
}