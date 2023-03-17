class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(N<M){
            return -1;
        }
        int s=0,e=0;
        for(int i=0;i<N;i++){
            s=max(s,A[i]);
            e+=A[i];
        }
        int ans=-1;
        while(e>=s){
            int m=s+(e-s)/2;
            int count=1,sum=0;
            for(int i=0;i<N;i++){
                if(sum+A[i]>m){
                    count++;
                    sum=0;
                }
                sum+=A[i];
            }
            if(count>M){
                s=m+1;
            }
            else{
                ans=m;
                e=m-1;
            }
        }
        return ans;
    }
};
