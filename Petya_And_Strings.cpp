#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int solve(string s1, string s2){

	for(int i=0; i<s1.length(); i++){
		if(s1[i] < s2[i])
			return -1;
		else if(s1[i] > s2[i])
			return 1;
	}
	return 0;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s1,s2;
	cin >> s1 >> s2;
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

	cout << solve(s1,s2) << endl;

	return 0;
}