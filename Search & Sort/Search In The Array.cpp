#include <bits/stdc++.h> 
vector<int> searchInTheArray(vector<int>& arr, vector<int>& queries, int n, int q)
{
	// Write Your code here
	unordered_map<int,int> m;
	for(int i = 0;i < n; i++){
		m[arr[i]]++;
	}
	vector<int> ans;
	for(int i = 0; i < q; i++){
		int sum = 0;
		for(auto &j : m){
			if(j.first <= queries[i]){
				sum += (j.first * j.second);
			}
		}
		ans.push_back(sum);
	}
	return ans;
}

