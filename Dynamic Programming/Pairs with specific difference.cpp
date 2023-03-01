int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
        // Your code goes here   
        int sum=0;
        sort(arr,arr+N);
        for(int i=N-2;i>=0;i--){
            if(arr[i+1]-arr[i]<K){
                sum+=(arr[i+1]+arr[i]);
                i--;
            }
        }
        return sum;
    }
