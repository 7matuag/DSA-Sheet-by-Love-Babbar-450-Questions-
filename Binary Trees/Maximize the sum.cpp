#include <bits/stdc++.h> 
int maximiseSum(vector<int>& arr1, vector<int>& arr2, int n, int m) {
	// Write your code here,
	int ans = 0;
	int i =0, j = 0;
	int sum1 = 0, sum2 =0;
	while(i < n && j < m){
		if(arr1[i] > arr2[j]){
			sum2 += arr2[j];
			j++;
		}
		else if(arr1[i] < arr2[j]){
			sum1 += arr1[i];
			i++;
		}
		else{
			ans  += arr1[i];
			ans += max(sum1 ,sum2);
			sum1 = 0;
			sum2 = 0;
			i++;
			j++;
		}
	}
	while(i < n){
		sum1 += arr1[i];
		i++;
	}
	while(j < m){
		sum2 += arr2[j];
		j++;
	}
	ans += max(sum1 ,sum2);
	return ans;
}
