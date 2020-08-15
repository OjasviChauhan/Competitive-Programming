#include <bits/stdc++.h>
using namespace std;
#define fl(i, a, b) for (long long int i = (a); i < (b); i++)
#define flr(i, a, b) for(long long int i = (a); i >=(b); i--)
#define itr(i, A) for(auto i=A.begin(); i != A.end(); ++i)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long int ll;
typedef vector<int> VI;
ll mod1=1000000007;
ll mod2=67280421310721;
ll mod3=998244353;
ll INF=1e18;
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}

ll minCoins(ll coins[],ll n,ll amount){
    ll dp[amount+1] = {0};
    
    for(ll i=1;i<=amount;i++){
        dp[i] = INT_MAX;
        for(ll j=0;j<n;j++){
            if(i-coins[j]>=0){
                ll subProb = dp[i-coins[j]];
                dp[i] = min(dp[i],subProb+1);
            }
        }
    }
    return dp[amount];
}
    
int main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    ll t;
    cin>>t;
    while(t-- > 0)
    {
        ll n,v;
        cin>>v>>n;
        ll coins[n];
        fl(i,0,n){
            cin>>coins[i];
        }
        ll ans = (minCoins(coins,n,v)==INT_MAX) ? -1 : minCoins(coins,n,v);
        cout<<ans<<endl;
    }
	return 0;
}
