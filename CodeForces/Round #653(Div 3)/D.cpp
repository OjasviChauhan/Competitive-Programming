#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <sstream>
#define FOR(i, a, b) for (long long int i = (a); i < (b); i++)
#define FORR(i, a, b) for(long long int i = (a); i >=(b); i--)
#define iterate(i, A) for(auto i=A.begin(); i != A.end(); ++i)
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
typedef long long int ll;
using namespace std;
ll mod1=1000000007;
ll mod2=67280421310721;
ll mod3=998244353;
ll INF=1e18;
 
int solve(int n,int k,vector<int> A){
    int x=0, count=0;
    while(A.size() > 0){
        iterate(i, A){
            if(*i % k == 0){
                A.erase(i);
                x--;
                count--;
                break;
            }
            else if((*i+x)%k == 0){
                A.erase(i);
                break;
            }
        }
        x++;
        count++;
    }
    return count;
}

int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       int n,k,input;
       cin >> n >> k;
       vector<int> A;
       FOR(i,0,n){
           cin >> input;
           A.pb(input);
       }
       int z = solve(n,k,A);
       cout << z << "\n";
    }
  return 0;
}
