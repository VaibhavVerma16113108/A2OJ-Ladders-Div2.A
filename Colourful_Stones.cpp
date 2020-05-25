#include<iostream>
#include<string>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s, instructions;
	cin >> s >> instructions;
	int pos = 1;
	int i=0; int j=0;
	while(i < s.length() and j < instructions.length()){
		if(s[i]==instructions[j]){
			pos++;
			i++;
		}
		j++;
	}
    cout << pos;
	return 0;
}