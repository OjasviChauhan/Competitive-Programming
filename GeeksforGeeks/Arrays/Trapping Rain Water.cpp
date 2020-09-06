#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
 
vector<int> highestRight(int A[],int n){
    vector<int> v;
    int right = A[n-1];
    v.push_back(right);
    for(int i=n-2;i>=0;i--){
        if(A[i]>right){
            v.push_back(A[i]);
            right = A[i];
        }
        else
            v.push_back(right);
    }
    reverse(v.begin(),v.end());
    return v;
}

vector<int> highestLeft(int A[],int n){
    vector<int> v;
    int left = A[0];
    v.push_back(left);
    for(int i=1;i<n;i++){
        if(A[i]>left){
            v.push_back(A[i]);
            left = A[i];
        }
        else
            v.push_back(left);
    }
    return v;
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
        
        vector<int> l = highestLeft(A,n);
        vector<int> r = highestRight(A,n);
        
        vector<int> area;
        for(int i=0;i<n;i++){
            area.push_back(min(l[i],r[i]) - A[i]);
        }
        int sum=0;
        for(int i=0;i<area.size();i++){
            sum += area[i];
        }
        cout<<sum<<endl;
    }
	return 0;
}
