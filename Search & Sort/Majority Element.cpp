// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int k=1,c=a[0];
        for(int i=1;i<size;i++){
            if(c==a[i]){
                k++;
            }
            else{
                k--;
                if(k==0){
                    c=a[i];
                    k=1;
                }
            }
        }
        int n=0;
        for(int i=0;i<size;i++){
            if(c==a[i]){
                n++;
            }
        }
        if(n>size/2){
            return c;
        }
        return -1;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
