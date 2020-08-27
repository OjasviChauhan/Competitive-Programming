#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <sstream>
#define FOR(i, a, b) for (long long int i = (a); i < (b); i++)
#define FORD(i, a, b) for(long long int i = (a); i >=(b); i--)
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
typedef long long int ll;
using namespace std;
ll mod1=1000000007;
ll mod2=67280421310721;
ll mod3=998244353;
ll INF=1e18;
 
int main()
{ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        ll dp[3][n+1];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(j==0)
                dp[i][j]=0;
                else if(i==0)
                {
                    if(j%a[0]==0)
                    dp[i][j]=j/a[0];
                    else
                    dp[i][j]=0;
                }
                else
                {
                    if(a[i]>j)
                     dp[i][j]=dp[i-1][j];
                    else
                    {
                        if(dp[i-1][j]==0&&dp[i][j-a[i]]==0&&j!=a[i])
                        dp[i][j]=0; //this is also important
                        else
                        dp[i][j]=max(dp[i-1][j],1+dp[i][j-a[i]]);
                    }
                }
            }
        }
        // for (int i = 0; i < 3; i++){ 
        //     for (int j = 0; j <= n; j++) 
        //         printf ("%4d", dp[i][j]); 
        //     printf("\n"); 
        // }
        cout<<dp[2][n]<<"\n";
    }
	return 0;
}
