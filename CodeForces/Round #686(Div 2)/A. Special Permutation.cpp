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
        int j=0;
        for(int i=n;j<n;i--){
            A[j] = i;
            j++;
        }
        if(n%2!=0){
            int temp = A[n/2];
            A[n/2] = A[n/2+1];
            A[n/2+1] = temp;
        }
        for(auto x:A){
            cout<<x<<" ";
        }
        cout<<endl;
    }
	return 0;
}
