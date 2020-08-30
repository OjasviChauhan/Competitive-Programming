#include <bits/stdc++.h>
using namespace std;
#define fl(i, a, b) for (int i = (a); i < (b); i++)
#define flr(i, a, b) for(int i = (a); i >=(b); i--)
#define itr(i, A) for(auto i=A.begin(); i != A.end(); ++i)
#define pb push_back
#define mp make_pair
#define endl '\n'
#define int long long
typedef vector<int> VI;
int mod1=1000000007;
int mod2=67280421310721;
int mod3=998244353;
int INF=1e18;
 
bool tripletSum(int A[],int n,int sum){
    for(int i=0;i<n-1;i++){
        unordered_set<int> s;
        for(int j=i+1;j<n;j++){
            if(s.find(sum-A[i]-A[j])!=s.end())
                return 1;
            s.insert(A[j]);
        }
    }
    return 0;
}

int32_t main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t-- > 0)
    {
        int n,x;
        cin>>n>>x;
        int A[n];
        fl(i,0,n){
            cin>>A[i];
        }
        cout<<tripletSum(A,n,x)<<endl;
    }
	return 0;
}


// Time: O(n^2)
// Space: O(n)
