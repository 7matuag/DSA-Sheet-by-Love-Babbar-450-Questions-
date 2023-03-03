static bool cmp(int a,int b){
        return (__builtin_popcount(a)>__builtin_popcount(b));
    }
    void sortBySetBitCount(int arr[], int n)
    {
        stable_sort(arr,arr+n,cmp);
    }
