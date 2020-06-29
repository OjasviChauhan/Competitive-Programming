#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <sstream>
#define FOR(i, a, b) for (long long int i = (a); i < (b); i++)
#define FORR(i, a, b) for(long long int i = (a); i >=(b); i--)
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
typedef long long int ll;
using namespace std;
ll mod1=1000000007;
ll mod2=67280421310721;
ll mod3=998244353;
ll INF=1e18;
 
int main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       int n;
       cin >> n;
       int count = 0;
       while(true){
           if(n==1){
               cout << count << "\n";
               break;
           }
           else if(n%6 == 2 || n%6 == 4){
               cout << "-1\n";
               break;
           }
           else if(n%6==0){
               n /= 6;
               count++;
           }
           else{
               n *= 2;
               count++;
           }
       }
    }
	return 0;
}
