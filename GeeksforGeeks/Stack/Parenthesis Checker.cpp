#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(string str){
    stack<char> s;
    int n = str.length();
    for(int i=0;i<str.length();i++){
        if(str[i]=='{' || str[i]=='[' || str[i]=='('){
            s.push(str[i]);
        }
        
        if (s.empty()){
            cout<<"not balanced"<<endl;
            return;
        }
        
        if(str[i]=='}'){
            char x = s.top();
            s.pop();
            if(x=='[' || x=='('){
                cout<<"not balanced"<<endl;
                return;
            }
        }
        if(str[i]==']'){
            char x = s.top();
            s.pop();
            if(x=='{' || x=='('){
                cout<<"not balanced"<<endl;
                return;
            }
        }
        if(str[i]==')'){
            char x = s.top();
            s.pop();
            if(x=='[' || x=='{'){
                cout<<"not balanced"<<endl;
                return;
            }
        }
    }
    if(s.empty())
        cout<<"balanced"<<endl;
    else
        cout<<"not balanced"<<endl;
}
 
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
        solve(s);
    }
	return 0;
}
