class Solution {
public:
    int countVowelStrings(int n) {
        if(n==1){
            return 5;
        } 
        int dp[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=0;
        }
        int A[5] = {5,4,3,2,1};
        
        for(int i=2;i<=n;i++){
            for(int j=0;j<5;j++){
                dp[i] += A[j];
            }
            int sum=0;
            for(int j=4;j>=0;j--){
                sum += A[j];
                A[j]=sum;
            }
        }
        return dp[n];
    }
};
