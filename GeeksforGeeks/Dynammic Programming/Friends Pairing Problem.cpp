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
        int dp[100];
        for(int i=0;i<=n;i++){
            if(i<=2){
                dp[i] = i;
            }
            else{
                dp[i] = (dp[i-1] + (i-1) * dp[i-2])%mod1;
            }
        }
        cout<<dp[n]<<endl;
    }
	return 0;
}
