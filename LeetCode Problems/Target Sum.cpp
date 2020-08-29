class Solution {
public:
    int countZeros(vector<int> nums, int z){
        int count=0;
        for(int i=0;i<=z;i++){
            if(nums[i] == 0){
                count++;
            }
        }
        return count;
    }
    
    int findTargetSumWays(vector<int>& nums, int S) {
        //Calculating the sum of array
        int sum=0;
        for(auto i=nums.begin();i<nums.end();i++){
            sum += *i;
        }
        // if total sum is odd and difference is 0, so this is not possible
        if(sum%2!=0 && S==0){
            return 0;
        }
        // Difference can't be greater than sum
        if(S > sum){
            return 0;
        }
              
        if((S+sum)%2!=0){
            return 0;
        }

        int s2 = (sum+S)/2;
        int n = nums.size();
        
        int dp[n+1][s2+1];
        
        //Initialization
        for(int j=0;j<=s2;j++){
    	    dp[0][j] = 0;
        }
        dp[0][0] = 1;
	for(int i=1;i<=n;i++){
	    int zeros = countZeros(nums,i-1);
            dp[i][0] = pow(2,zeros);
	}

        //code to fill rest of the table
        for(int i=1;i<=n;i++){
    	    for(int j=1;j<=s2;j++){
    		    if(nums[i-1]<=j){
    			    dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];
    		    }
    		    else{
    			    dp[i][j] = dp[i-1][j];
    		    }
    	    }
        }  
        return dp[n][s2];
    }
};
