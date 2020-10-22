class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        if(arr.size()==1){
            return 0;
        }
        int start = 0;
        int end = arr.size()-1;
        int n = end;
   
        while(start<=end){
            int mid = (start+end)/2;
            if(mid>0 && mid<n){
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                   return mid;
                }
                else if(arr[mid-1]>arr[mid]){
                   end = mid-1;
                }
                else if(arr[mid+1]>arr[mid]){
                   start = mid+1;
                }
            }
            else if(mid==0){
                if(arr[0]>arr[1]) return 0;
                else return 1;
            }
            else if (mid==n){
                if(arr[n]>arr[n-1]) return n;
                else return n-1;
            }
        }
        return 0;
    }
};
