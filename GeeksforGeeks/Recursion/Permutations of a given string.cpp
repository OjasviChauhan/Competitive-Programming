#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<endl;

void solve(string ip,string op,vector<string> &v){
    if(ip.length()==0){
        v.push_back(op);
        return;
    }
    
    for(int i=0;i<ip.length();i++){
        string op1 = op;
        swap(ip[0],ip[i]);
        op1 += ip[0];
        solve(ip.substr(1,ip.length()), op1, v);
    }
}

int main(){
	int n;
	cin>>n;
	while(n--){
    	string ip;
    	cin>>ip;
    	string op="";
    	vector<string> v;
    	solve(ip,op,v);
    	sort(v.begin(),v.end());
    	print(v);
	}
	return 0;
}
