#include <bits/stdc++.h>
#define N 105
using namespace std;
typedef pair<int, pair<int,int>> pi;

vector<int> mergeKArrays(int A[][N], int k)
{
    priority_queue<pi, vector<pi>, greater<pi> > pq; 
    vector<int> v;
    
    for(int i=0;i<k;i++){
        pq.push({A[i][0],{i,0}});
    }
    while(!pq.empty()){
        v.push_back(pq.top().first);
        int row = pq.top().second.first;
        int col = pq.top().second.second;
        pq.pop();
        col+=1;
        if(col<k){
            pq.push({A[row][col], {row,col}});
        }
    }
    return v;
}

int main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t-- > 0)
    {
        int k;
        cin>>k;
        int A[N][N];
        for(int i=0;i<k;i++){
            for(int j=0;j<k;j++){
                cin>>A[i][j];
            }
        }
        vector<int> Ans = mergeKArrays(A,k);
        for(int i=0;i<k*k;i++){
            cout<<Ans[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
