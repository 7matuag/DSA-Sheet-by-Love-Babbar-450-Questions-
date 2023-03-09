vector<int> nextPermutation(int N, vector<int> arr){
        int i=N-1;
        while(i>0 && arr[i]<=arr[i-1]){
            i--;
        }
        reverse(arr.begin()+i,arr.end());
        if(i-1>=0){
            int j=i;
            while(j<N && arr[i-1]>=arr[j]){
                j++;
            }
            if(j<N){
                swap(arr[i-1],arr[j]);
            }
        }
        return arr;
    }
