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
        stack<int> s;
        
        for(int i=n-1;i>=0;i--){
            if(s.empty()){
                v.push_back(-1);
            }
            else if(!s.empty() && A[i]<s.top()){
                v.push_back(s.top());
            }
            else if(!s.empty() && A[i]>=s.top()){
                while(!s.empty() && s.top()<=A[i]){
                    s.pop();
                }
                if(s.empty()) 
                    v.push_back(-1);
                else 
                    v.push_back(s.top());
            }
            s.push(A[i]);
        }
        reverse(v.begin(),v.end());
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
	return 0;
}
