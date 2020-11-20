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
        string s;
        cin>>s;
        int count=0;
        int flag1 = 0,flag2 = 0;
        for(char c:s){
            if(c=='('){
                flag1++;
            }
            else if(c=='['){
                flag2++;
            } 
            else if (c==')' and flag1>0){
                count++;
                flag1--;
            }
            else if(c==']' and flag2>0){
                count++;
                flag2--;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
