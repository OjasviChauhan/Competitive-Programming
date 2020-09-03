#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
 
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
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        
        vector<int> v;
        stack<pair<int,int>> s;
        for(int i=0;i<n;i++){
            if(s.empty()){
                v.push_back(1);
            }
            else if(!s.empty() && s.top().first>A[i]){
                v.push_back(1);
            }
            else if(!s.empty() && s.top().first<=A[i]){
                while(!s.empty() && s.top().first<=A[i]){
                    s.pop();
                }
                if(s.empty())
                    v.push_back(i+1);
                else
                    v.push_back(i - s.top().second);
            }
            s.push({A[i],i});
        }
        
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
	return 0;
}
