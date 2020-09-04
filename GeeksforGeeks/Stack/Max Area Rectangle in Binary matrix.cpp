#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<int> nextSmallerRight(int A[],int n){
    vector<int> v;
    stack<pair<int,int>> s;
    
    for(int i=n-1;i>=0;i--){
        if(s.empty()){
            v.push_back(0);
        }
        else if(!s.empty() && s.top().first<A[i]){
            v.push_back(0);
        }
        else if(!s.empty() && s.top().first>=A[i]){
            while(!s.empty() && s.top().first>=A[i]){
                s.pop();
            }
            if(s.empty())
                v.push_back(n-i-1);
            else
                v.push_back(s.top().second-i-1);
        }
        s.push({A[i],i});
    }
    reverse(v.begin(),v.end());
    return v;
}

vector<int> nextSmallerLeft(int A[],int n){
    vector<int> v;
    stack<pair<int,int>> s;
    
    for(int i=0;i<n;i++){
        if(s.empty()){
            v.push_back(0);
        }
        else if(!s.empty() && s.top().first<A[i]){
            v.push_back(0);
        }
        else if(!s.empty() && s.top().first>=A[i]){
            while(!s.empty() && s.top().first>=A[i]){
                s.pop();
            }
            if(s.empty())
                v.push_back(i);
            else
                v.push_back(i-s.top().second-1);
        }
        s.push({A[i],i});
    }
    return v;
}

int MAH(int A[],int n){
    vector<int> r,l;
    l = nextSmallerLeft(A,n);
    r = nextSmallerRight(A,n);
        
    int Max=0,area=0;
    for(int i=0;i<n;i++){
        area = A[i]*(l[i]+r[i]+1);
        if(area>Max)
            Max=area;
    }
    return Max;
}

int maxArea(int M[MAX][MAX], int n, int m) {
    int v[m];
    for(int j=0;j<m;j++){
        v[j] = M[0][j];
    }
    int mx = MAH(v,m);
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(M[i][j]==0)
                v[j]=0;
            else
                v[j] += M[i][j];
        }
        mx = max(mx,MAH(v,m));
    }
    return mx;
}

int main(){
  int t;
  cin>>t;
  int M[MAX][MAX];
  while(t-->0){
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>M[i][j];
      }
    }
    cout<<maxArea(M,n,m)<<endl;
  }
}
