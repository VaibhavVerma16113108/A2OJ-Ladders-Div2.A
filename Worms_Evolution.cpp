#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

	int main(){
		ios::sync_with_stdio(0);
		cin.tie(0);

		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
		for (int i = 0; i < n; ++i) {
	    for (int j = i+1; j <n; ++j) {
	      for (int k = j+1; k < n; ++k) {
	        if (a[i]==a[j]+a[k]) {
	          printf("%d %d %d\n", i+1, j+1, k+1);
	          return 0;
	        }
	        if (a[j]==a[i]+a[k]) {
	          printf("%d %d %d\n", j+1, i+1, k+1);
	          return 0;
	        }
	        if (a[k]==a[i]+a[j]) {
	          printf("%d %d %d\n", k+1, i+1, j+1);
	          return 0;
	        }
	      }
	    }
	  }
	  printf("-1\n");
	}