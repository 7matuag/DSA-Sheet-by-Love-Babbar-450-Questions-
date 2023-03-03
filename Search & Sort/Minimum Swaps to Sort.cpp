int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int count=0;
	    vector<pair<int,int>>vp;
	    for(int i=0;i<nums.size();i++){
	        vp.push_back({nums[i],i});
	    }
	    sort(vp.begin(),vp.end());
	    for(int i=0;i<nums.size();i++){
	        if(nums[i]!=vp[i].first){
	            count++;
	            swap(vp[vp[i].second],vp[i]);
	            i--;
	        }
	    }
	    return count;
	}
