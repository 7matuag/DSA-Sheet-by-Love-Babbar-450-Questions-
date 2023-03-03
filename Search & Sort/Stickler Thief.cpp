int solve(int arr[],int n,vector<int>&memo){
        if(n==0){
            return memo[n]=0;
        }
        if(memo[n]!=-1){
            return memo[n];
        }
        if(n==1){
            return memo[n]=arr[n-1];
        }
        return memo[n]=max(arr[n-1]+solve(arr,n-2,memo),solve(arr,n-1,memo));
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int>memo(n+1,-1);
        return solve(arr,n,memo);
    }
