#include <bits/stdc++.h> 
int divideTwoInteger(int dividend, int divisor) {
	// Write your code here.
	bool f = 0;
	if((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)){
		f = 1;
	}
	long long Divisor = abs(divisor);
	long long Dividend = abs(dividend);
	long long ans = 0;
	for (int i = 30 ; i >= 0; i--){
		if((Divisor << i) <= Dividend){
			Dividend -= (Divisor << i);
			ans |= (1 << i);
		}
	}
	if(f){
		ans = -ans;
	}
	return ans;
} 
