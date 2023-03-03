int findNum(int n)
        {
        //complete the function here
            int ans=INT_MAX;
            int low=5,high=40010;
            while(low<=high){
                int mid=(low+high)/2;
                int count=0;
                for(int i=5;i<=mid;i*=5){
                    count+=(mid/i);
                }
                if(count>=n){
                    ans=min(ans,mid);
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            return ans;
        }
