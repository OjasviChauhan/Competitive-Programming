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

int subsetSum(int arr[],int n,int sum){
    bool dp[n+1][sum+1];
    
    for(int j=0;j<=sum;j++){
        dp[0][j] = false;
    }
    for(int i=0;i<=n;i++){
        dp[i][0] = true;
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    
    int value=-1;
    for(int j=sum;j>=0;j--){
        if(dp[n][j]){
            value = j;
            break;
        }
    }
    return value;
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
        fl(i,0,n){
            cin>>A[i];
        }
        int sum=0;
        fl(i,0,n){
            sum += A[i];
        }
        int S1 = subsetSum(A,n,sum/2);
        int ans = sum - 2*S1;
        cout<<ans<<endl;
    }
	return 0;
}
