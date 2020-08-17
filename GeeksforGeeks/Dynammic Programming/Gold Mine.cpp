#include <bits/stdc++.h>
using namespace std;

int goldMine(int M[][100],int m,int n){
    int dp[m][n];
    memset(dp,0,sizeof(dp));
    
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            int x = (i==0||j==0) ? 0 : dp[i-1][j-1];
            int y = (j==0) ? 0 : dp[i][j-1];
            int z = (i==m-1||j==0) ? 0 : dp[i+1][j-1];
            
            dp[i][j] = M[i][j] + max(x,max(y,z));
        }
    }

    int res = dp[0][0];
    for(int i=0;i<m;i++){
        res = max(res,dp[i][n-1]);
    }
    return res;
}
 
int32_t main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t-- > 0)
    {
      int m,n;
      cin>>m>>n;
      int M[100][100];
      for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
              cin>>M[i][j];
          }
      }
      cout<<goldMine(M,m,n)<<endl;
    }
	return 0;
}
