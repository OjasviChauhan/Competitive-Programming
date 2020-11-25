#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'
#define int long long
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<endl;
typedef vector<int> VI;
int mod=1000000007;
 
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
        if(n==1)
            cout<<0<<endl;
        else if(n==2){
            cout<<1<<endl;
        }
        else if(n==3){
            cout<<2<<endl;
        }
        else if(n%2==0){
            cout<<2<<endl;
        }
        else cout<<3<<endl;
    }
	return 0;
}
