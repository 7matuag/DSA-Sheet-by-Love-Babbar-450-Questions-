#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// your code here
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i]; 
		}
		sort(v.begin(),v.end());
		int i = 0;
		while(v[i] == 1){
			cout << v[i] << " "; 
            i++;
		}
		if(i == n - 2 && v[i] == 2 && v[i + 1] == 3){
			cout << 2 <<" "<< 3 << " ";
		}
		else{
            int j = n - 1;
			while(j >= i){
				cout << v[j] << " "; 
				j--;
			}
		}
		cout<<endl;
	}
	return 0;
}
