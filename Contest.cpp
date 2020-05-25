#include<iostream>

using namespace std;

int score(int p, int t){
	return max(3*p/10, p - p*t/250);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,b,c,d;
	cin >> a >> b >> c >> d;

	if(score(a,c) > score(b,d)) cout << "Misha";
	else if (score(a,c) < score(b,d)) cout << "Vasya";
	else cout << "Tie";

	return 0;
}