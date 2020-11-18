#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'
#define int long long
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<endl;
typedef vector<int> VI;
int mod=1000000007;
 
int32_t main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t-- > 0)
    {
        int n,k;
        cin>>n>>k;
        int A[n*k];
        for(int i=0;i<n*k;i++){
            cin>>A[i];
        }
        int x = n/2+1;
        int j=k;
        int ans=0;
        for(int i=n*k-x;j>0;i-=x){
            ans += A[i];
            j--;
        }
        cout<<ans<<endl;
    }
	return 0;
}
