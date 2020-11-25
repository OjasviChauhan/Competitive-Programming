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
        int n;
        cin>>n;
        int b[n];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
 
        vector<int> A;
        A.push_back(b[0]);
        for(int i=0;i<n-1;i++){
            if(b[i+1]!=b[i]){
                A.push_back(b[i+1]);
            }
        }
        
        //print(A);
        unordered_map<int, vector<int> > mp;
        for(int i=0;i<A.size();i++){
            mp[A[i]].push_back(i);
        }
        // for(auto x:mp){
        //     cout<<x.first<<" --> ";
        //     print(x.second);
        // }
        // cout<<endl;
 
        int ans = INT_MAX;
        for(auto x:mp){
            int temp;
            if(x.second[0]==0 && x.second[x.second.size()-1]==A.size()-1){
                temp = x.second.size()-1;
            }
            else if(x.second[0]>0 && x.second[x.second.size()-1]<A.size()-1){
                temp = x.second.size() + 1;
            }
            else if(x.second[0]>0 && x.second[x.second.size()-1]==A.size()-1){
                temp = x.second.size();
            }
            else if(x.second[0]==0 && x.second[x.second.size()-1]<A.size()-1){
                temp = x.second.size();
            }
            ans = min(ans, temp);
        }
        cout<<ans<<endl;
    }
	return 0;
}
