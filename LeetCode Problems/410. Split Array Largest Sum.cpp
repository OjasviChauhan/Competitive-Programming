class Solution {
public:
    bool isValid(vector<int> &nums,int m,int n,int mid){
        int student = 1;
        int sum = 0;
        
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum > mid){
                student++;
                sum = nums[i];
            }
            if(student > m)
                return false;
        }
        return true;
    }
    
    int splitArray(vector<int>& nums, int m) {
        int n = nums.size();
        int maxElement = *max_element(nums.begin(),nums.end());
        int sumOfVector = accumulate(nums.begin(),nums.end(),0);
        
        if(m > n) return 0;
        
        int start = maxElement;
        int end = sumOfVector;
        int result = -1;
        
        while(start<=end){
            int mid = (start+end)/2;
            if(isValid(nums,m,n,mid)){
                result = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return result;
    }
};
