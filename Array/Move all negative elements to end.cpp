class Solution{
    public:
    void segregateElements(int arr[],int n){
        // Your code goes here
        vector<int> temp;
        int j=0;
       for(int i=0;i<n;i++){
           if(arr[i]>=0){
               arr[j++]=arr[i];
           }
           else{
               temp.push_back(arr[i]);
           }
       }
       int k=0;
       for(int i=j;i<n;i++){
           arr[i]=temp[k++];
       }
    }
};
