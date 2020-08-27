#include <bits/stdc++.h>
using namespace std;
#define fl(i, a, b) for (int i = (a); i < (b); i++)
#define flr(i, a, b) for(int i = (a); i >=(b); i--)
#define itr(i, A) for(auto i=A.begin(); i != A.end(); ++i)
#define pb push_back
#define mp make_pair
#define endl '\n'
#define int long long
typedef vector<int> VI;
int mod1=1000000007;
int mod2=67280421310721;
int mod3=998244353;
int INF=1e18;
 
int32_t main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t-- > 0)
    {
      int n;
      cin>>n;
      int arr[n];
      fl(i,0,n){
          cin>>arr[i];
      }
      int sum;
      cin>>sum;
      
      int dp[n+1][sum+1];
      
      for(int j=0;j<=sum;j++){
          dp[0][j] = 0;
      }
      for(int i=0;i<=n;i++){
          dp[i][0] = 1;
      }
      
      for(int i=1;i<=n;i++){
          for(int j=1;j<=sum;j++){
              if(arr[i-1]<=j){
                  dp[i][j] = dp[i][j-arr[i-1]] + dp[i-1][j];
              }
              else{
                  dp[i][j] = dp[i-1][j];
              }
          }
      }
      cout<<dp[n][sum]<<endl;
    }
	return 0;
}
