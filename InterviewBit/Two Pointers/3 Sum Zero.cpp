vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int>> ans;
    int n=A.size();
    sort(A.begin(),A.end());
    
    for(int i=0;i<n-2;i++){
        int j = i+1;
        int k = n-1;
        
        if (i>0 && A[i]==A[i-1])    // pass duplicates for i
            continue;
            
        while(j<k){
            if (j>i+1 && A[j]==A[j-1]){    // pass duplicates for j
                j++;
                continue;
            }

            if (k<n-1 && A[k]==A[k+1]){    // pass duplicates for k
                k--;
                continue;
            }
            
            long long int sum = (long long int)A[i] + (long long int)A[j] + (long long int)A[k];
            if(sum==0){
                ans.push_back({A[i],A[j],A[k]});
                j++;
                k--;
            }
            else if(sum<0){
                j++;
            }
            else
                k--;
        }
    }
    return ans;
}
