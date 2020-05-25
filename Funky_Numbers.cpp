#include<iostream>
#include<cmath>
using namespace std;
#define ll long long int 

bool isTriangular(ll num) 
{ 
    if (num < 0) 
        return false; 
  
    // Considering the equation n*(n+1)/2 = num 
    // The equation is  : a(n^2) + bn + c = 0"; 
    ll c = (-2 * num); 
    ll b = 1, a = 1; 
    ll d = (b * b) - (4 * a * c); 
  
    if (d < 0) 
        return false; 
  
    // Find roots of equation 
    float root1 = ( -b + sqrt(d)) / (2 * a); 
    float root2 = ( -b - sqrt(d)) / (2 * a); 
  
    // checking if root1 is natural 
    if (root1 > 0 && floor(root1) == root1) 
        return true; 
  
    // checking if root2 is natural 
    if (root2 > 0 && floor(root2) == root2) 
        return true; 
  
    return false; 
} 

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n;
	cin >> n;
	ll i = 1;
	while(i*(i+1)/2 < n){
		ll a = i*(i+1)/2;
		if(isTriangular(n-a/2)){
			cout << a << endl;
			cout << "YES";
			return 0;
		}
		i++;
	}
	cout << "NO";
	return 0;
}