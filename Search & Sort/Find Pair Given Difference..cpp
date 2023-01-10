
//O(N) time and O(N) space
bool findPair(int arr[], int size, int n){
    //code
    unordered_set<int>s;
    for(int i=0;i<size;i++){
        if(s.find(arr[i]+n)!=s.end() || s.find(arr[i]-n)!=s.end()){
            return 1;
        }
        s.insert(arr[i]);
    }
    return 0;
}

//O(Nlog(N)) time and O(1) space
bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    int i=0,j=1;
    while(i<size && j<size){
        if(i!=j && arr[j]-arr[i]==n){
            return 1;
        }
        else if(i!=j && arr[j]-arr[i]>n){
            i++;
        }
        else{
            j++;
        }
    }
    return 0;
}
