#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int minCost(int A[],int n){
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++){
        pq.push(A[i]);
    }
    int sum=0;
    while(pq.size()>=2){
        int first=pq.top();
        pq.pop();
        int second=pq.top();
        pq.pop();
        sum += first+second;
        pq.push(first+second);
    }
    return sum;
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
        cout<<minCost(A,n)<<endl;
    }
	return 0;
}
