class Solution{
public:	
	int maxSubstring(string s)
	{
	    // Your code goes here
	    int ans = 0;
	    int i = 0, j = 0;
	    int count1 = 0, count0 = 0;
	    while(j < s.size()){
	        if(s[j] == '0'){
	            count0++; 
	        }
	        else{
	            count1++;
	        }
	        ans = max(ans, count0 - count1);
	        while(count1 > count0){
	            if(s[i] == '0'){
    	            count0--; 
    	        }
    	        else{
    	            count1--;
    	        }
    	        i++;
	        }
	        j++;
	    }
	    if(ans == 0){
	        return -1;
	    }
	    return ans;
	}
};
