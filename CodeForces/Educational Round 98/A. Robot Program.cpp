#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'
#define int long long
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<endl;
int mod=1000000007;
 
int solve(int x,int y){
    if(x==y or abs(x-y)==1){
        return x+y;
    }
    else if(x>y){
        return solve(y,y) + (x-y-1)*2 + 1;
    }
    else{
        return solve(x,x) + (y-x-1)*2 + 1;
    }
}
 
int32_t main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t-- > 0)
    {
        int x,y;
        cin>>x>>y;
        cout<<solve(x,y)<<endl;
    }
	return 0;
}
