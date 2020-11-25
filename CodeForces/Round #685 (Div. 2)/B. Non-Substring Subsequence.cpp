#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'
#define int long long
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<endl;
typedef vector<int> VI;
int mod=1000000007;
 
string solve(int l,int r,int n,string s){
    char left = s[l-1];
    char right = s[r-1];
    
    bool flag1 = false;
    bool flag2 = false;
    string ans = "YES";
    
    int i=0;
    for(i=0;i<l-1;i++){
        if(s[i]==left){
            break;
        }
    }
    if(i==l-1) {
        flag1 = true;
    }
 
 
    i = 0;
    for(i=r;i<n;i++){
        if(s[i]==right){
            break;
        }
    }
    if(i==n) {
        flag2 = true;
    }
    
    if(flag1 and flag2){
        ans = "NO";
    }
    return ans;
}
 
int32_t main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t-- > 0)
    {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;
            //string S = s.substr(l-1,r-1);
            cout<<solve(l,r,n,s)<<endl;
        }
    }
	return 0;
}
