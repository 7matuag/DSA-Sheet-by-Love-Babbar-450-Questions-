#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(1){
        cin>>n;
        if(n == 0){
        	break;
        }
		vector<int> v(n);
		for(int i = 0; i < n; i++){
			cin>>v[i];
		}
        long long ans = 0, count = v[0];
        for(int i = 1; i< n; i++){
        	ans += abs(count);
        	count += v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
