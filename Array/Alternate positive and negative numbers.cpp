//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>a;
	    vector<int>b;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            b.push_back(arr[i]);
	        }
	        else{
	            a.push_back(arr[i]);
	        }
	    }
	    int j=0,k=0,i=0;
	    while(i<n){
	        if(j<a.size()){
	            arr[i]=a[j];
	            j++;
	        }
	        if(k<b.size()){
	            arr[i]=b[k];
	            k++;
	        }
            i++;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
