class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int ans = 0;
        
        while(start<=end){
            int mid = (start + end)/2;
            int next = (mid+1)%n;
            int prev = (mid+n-1)%n;
            
            if(nums[prev]>nums[mid] && nums[next]>nums[mid]){
                ans = nums[mid];
                break;
            }
            else if(nums[start] <= nums[mid] && nums[mid] <= nums[end]){
	            ans = nums[start];
                break;
	        }
            else if(nums[start] <= nums[mid]){
                start = mid+1;
            }
            else if(nums[mid] <= nums[end]){
                end = mid-1;
            }
        }
        return ans;
    }
};
