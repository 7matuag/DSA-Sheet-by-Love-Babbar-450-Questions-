#include <bits/stdc++.h> 
int P(int n, int k) {
	// Write your code here.
	long long int mod = 1e9 + 7;
	long long int ans = 1;
	for (int i = 1; i <= k; i++){
		ans = ((ans) * (n - i + 1)) % mod;
	}
	return ans ;
}
