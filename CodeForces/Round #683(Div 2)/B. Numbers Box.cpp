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
        int n,m;
        int sum=0;
        cin>>n>>m;
        int no;
        int smallest = INT_MAX;
        int negativeCount=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>no;
                sum += abs(no);
                smallest = min(smallest,abs(no));
                if(no<0) negativeCount++;
            }
        }
        //cout<<sum<<" "<<smallest<<endl;
        if(smallest==0 || negativeCount%2==0) cout<<sum<<endl;
        else cout<<sum-2*smallest<<endl;
    }
	return 0;
}
