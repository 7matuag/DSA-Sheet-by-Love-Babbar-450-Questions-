#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// your code here
	int t;
	cin >> t;
	while(t--){
		int M, N;
		cin >> M >> N;
		vector<int> X(M - 1), Y(N - 1);
		for(int i = 0; i< M - 1; i++){
			cin >> X[i];
		}
		for(int i = 0; i< N - 1; i++){
			cin >> Y[i];
		}
		M--;
        N--;
        int ans=0;
        int h=1,v=1;
        sort(X.begin(),X.end(),greater<int>());
        sort(Y.begin(),Y.end(),greater<int>());
        int i=0,j=0;
        while(i<M && j<N){
            if(X[i]<Y[j]){
                ans+=Y[j]*v;
                j++;
                h++;
            }
            else{  
                ans+=X[i]*h;
                i++;
                v++;
            }
        }
        while(i<M){
            ans+=X[i]*h;
            i++;
        }
        while(j<N){
            ans+=Y[j]*v;
            j++;
        }
        cout << ans << endl;
	}
	return 0;
}
