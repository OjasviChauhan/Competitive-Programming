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
 
int myCompare(string X,string Y){
    string XY = X.append(Y);
    string YX = Y.append(X);
    
    return XY.compare(YX) > 0 ? 1 : 0;
}

string largestNumber(int A[],int n){
    vector<string> s;
    for(int i=0;i<n;i++){
        s.pb(to_string(A[i]));
    }
    
    sort(s.begin(),s.end(), myCompare);
    
    string str="";
    for(string x:s){
        str += x;
    }
    return str;
}

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
        string s = largestNumber(A,n);
        cout<<s<<endl;
    }
	return 0;
}
