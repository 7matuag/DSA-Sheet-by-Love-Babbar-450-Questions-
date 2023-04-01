#include <bits/stdc++.h> 
vector<double> findMedian(vector<int> &arr, int n, int m)
{ 
	vector<double>ans;
	for (int i = 0; i <= n - m; i++){
	vector<int>temp = vector<int>(arr.begin() + i, arr.begin() + m + i); 
		sort(temp.begin(), temp.end());
		double med;
		if(m & 1){
			med = temp[m / 2] / 1.0;
		}
		else{
			med = (temp[(m / 2) - 1] + temp[m / 2]) / 2.0;
		}
		ans.push_back(med);
	}
	return ans;
}
