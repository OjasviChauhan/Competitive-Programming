#include <bits/stdc++.h>
using namespace std;
#define fl(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define endl '\n'
#define int long long
#define ff first
#define ss second
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<endl;
int mod=1000000007;
 
int pow1(int a,int b){
    int res=1;
    while (b>0){
        if (b&1)
        res=res*a;
        a=a*a;
        b>>=1;
    }
    return res;
}
 
void solve()
{
    int n;
    cin>>n;
    int i;
    unordered_map<int,int> mp;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            mp[i]++;
            n /= i;
            i=1;
        }
    }
    if(n!=1){
        mp[n]++;
    }
 
    int maxValue = 0;
    int maxKey;
    for(auto x:mp){
        if(x.ss > maxValue){
            maxValue = x.ss;
            maxKey = x.ff;
        }
    }
 
    vector<int> v;
    for(int i=0;i<maxValue-1;i++){
        v.pb(maxKey);
    }
    mp[maxKey]=1;
 
    int remain=1;
    for(auto x:mp){
        remain *= pow1(x.ff, x.ss);
    }
    v.pb(remain);
 
    cout<<v.size()<<endl;
    print(v);
}
 
int32_t main(){
    fast;
    int t;
    cin>>t;
    while(t--)
    {
       solve(); 
    }
	return 0;
}
