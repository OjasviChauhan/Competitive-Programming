#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <sstream>
#define FOR(i, a, b) for (long long int i = (a); i < (b); i++)
#define FORR(i, a, b) for(long long int i = (a); i >=(b); i--)
#define ITR(i, A) for(auto i=A.begin(); i != A.end(); ++i)
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
      if(n%2 == 0){
          cout << n/2 << "\n";
      }
      else{
          cout << (n/2) + 1 << "\n";
      }
    }
	return 0;
}
