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

ll uglyNumbers(ll n){
	ll dp[n] = {0};
	dp[0] = 1;

	ll next_multiple_of_2 = 2;
	ll next_multiple_of_3 = 3;
	ll next_multiple_of_5 = 5;

	ll i2=0, i3=0, i5=0;

	fl(i,1,n){
		dp[i] = min(next_multiple_of_2, min(next_multiple_of_3, next_multiple_of_5));

		if(dp[i] == next_multiple_of_2){
			i2++;
			next_multiple_of_2 = dp[i2] * 2;
		}

		if(dp[i] == next_multiple_of_3){
			i3++;
			next_multiple_of_3 = dp[i3] * 3;
		}

		if(dp[i] == next_multiple_of_5){
			i5++;
			next_multiple_of_5 = dp[i5] * 5;
		}
	}
	return dp[n-1];
}

int main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    ll t;
    cin>>t;
    while(t-- > 0)
    {
    	ll n;
    	cin>>n;
    	cout<< uglyNumbers(n) <<"\n";
    }
	return 0;
}
