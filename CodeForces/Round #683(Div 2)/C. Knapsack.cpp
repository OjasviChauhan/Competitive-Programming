#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'
#define int long long
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<endl;
int mod=1000000007;
 
bool isValid(int sum, int W){
    int th = (W%2==0) ? W/2 : W/2+1;
    return (sum>=th && sum<=W) ? true : false;
}
 
int32_t main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,W;
        cin>>n>>W;
        int input[n];
        for(int i=0;i<n;i++){
            cin>>input[i];
        }
 
        int sum=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(input[i] <= W){
                if(isValid(input[i], W)){
                    //cout<<i+1<<" HI"<<endl;
                    v.clear();
                    sum = input[i];
                    v.pb(i+1);
                    break;
                }
                else if(isValid(sum+input[i], W)){
                    v.pb(i+1);
                    sum += input[i];
                    //cout<<"hello "<<sum<<endl;
                }
                else{
                    v.pb(i+1);
                    sum += input[i];
                }
                //cout<<sum<<endl;
            }
            if(W%2==0 and sum>=W/2) break;
            if(W%2!=0 and sum>=W/2+1) break;
        }
 
        if(v.size()==0) cout<<-1<<endl;
        else if(W%2!=0 and sum<W/2+1) cout<<-1<<endl;
        else if(W%2==0 and sum<W/2) cout<<-1<<endl;
        else{
            cout<<v.size()<<endl;
            print(v);
        }
    }
	return 0;
}
