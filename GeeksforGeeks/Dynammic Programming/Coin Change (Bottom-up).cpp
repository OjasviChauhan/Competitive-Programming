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

int numberOfWays(int coins[],int n,int amount){
    int ways[amount+1] = {0};
    ways[0] = 1;
    
    for(int i=0;i<n;i++){
        for(int j=1;j<=amount;j++){
            if(coins[i]<=j){
                ways[j] += ways[j-coins[i]]; 
            }   
        }
    }
    return ways[amount];
}
 
int main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    ll t;
    cin>>t;
    while(t-- > 0)
    {
        int n;
        cin>>n;
        int coins[n];
        fl(i,0,n){
            cin>>coins[i];
        }
        int amount;
        cin>>amount;
        cout<<numberOfWays(coins,n,amount)<<endl;
    }
	return 0;
}
