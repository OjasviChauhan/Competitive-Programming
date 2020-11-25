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
        int A[n];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>A[i];
            mp[A[i]]++;
        }
 
        // for (itr = mp.begin(); itr != mp.end(); ++itr){
        //     cout<<itr->first<<" "<<itr->second<<endl;
        // }
        map<int, int>::iterator itr;
        int key=-1;
        for (itr = mp.begin(); itr != mp.end(); ++itr) { 
            if(itr->second == 1){
                key = itr->first;
                break;
            }
        }
        if(key==-1) cout<<key<<endl;
        else{
            for(int i=0;i<n;i++){
                if(A[i]==key){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
	return 0;
}
