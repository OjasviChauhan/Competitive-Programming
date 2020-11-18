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
      	int n,c0,c1,h;
      	cin>>n>>c0>>c1>>h;
      	string s;
      	cin>>s;
 
        int ans = 0;
      	if(c0==c1){
      		ans=n*c0;
      	}
        else if(c0<c1){
            for(char c:s){
                if(c=='0') 
                    ans += c0;
                else
                    ans += min(c1, h+c0);
            }
        }
        else{
            for(char c:s){
                if(c=='1') 
                    ans += c1;
                else
                    ans += min(c0, h+c1);
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
