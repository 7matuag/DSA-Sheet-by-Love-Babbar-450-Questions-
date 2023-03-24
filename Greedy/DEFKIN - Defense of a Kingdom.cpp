#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,h,n;
        cin>>w>>h>>n;
        // if(n == 0){
        //     cout << w * h << "\n";
        //     continue;
        // }
        vector<int> v1(n + 2),v2(n + 2);
        v1[0] = 0, v2[0] = 0;
        for(int i = 1; i <= n; i++){
            cin>>v1[i] >> v2[i];
            // cout << v1[i] << " " << v2[i] << "\n";
        }
        v1[n + 1] = w + 1, v2[n + 1] = h  + 1;
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        // for(auto e : v1){
        //     cout << e << " ";
        // }
        // cout << "\n";
        int ans = 0;
        int ht = 0, width = 0;
        // ans = (v[])
        for(int i = 1; i <= n + 1; i++){
        	ht = max(ht, v1[i] - v1[i - 1] - 1);
        	width = max(width, v2[i] - v2[i - 1] - 1);
            // ans = max(ans, (v1[i] - v1[i-1]- 1) * (v2[i] - v2[i-1] - 1));
        }
        // cout << ht << " " << width << "\n";
        cout<<ht * width<<endl ;
    }
    return 0;
}
    
