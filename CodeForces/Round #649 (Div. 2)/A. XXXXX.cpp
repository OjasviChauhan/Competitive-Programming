#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'
#define int long long
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<endl;
int mod=1000000007;
 
int32_t main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t-- > 0)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int ans = 0;
        int sum = 0;
        for(int i=0;i<n;++i) {
            sum += a[i];
            if(sum % x) ans = max(ans, i+1);
        }
        sum = 0;
        for(int i=n-1;i>=0;--i) {
            sum += a[i];
            if(sum % x) ans = max(ans, n-i);
        }
        if(ans == 0) ans = -1;
 
        cout<<ans<<endl;
    }
	return 0;
}
