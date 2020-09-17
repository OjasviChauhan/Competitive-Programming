class Solution{
public:	
	void solve(int N,int one,int zero,vector<string> &v,string s){
	    if(N==0){
	        v.push_back(s);
	        return;
	    }
	    string op1 = s;
	    op1.push_back('1');
	    solve(N-1,one+1,zero,v,op1);
	    
	    if(one>zero){
	        string op2 = s;
	        op2.push_back('0');
	        solve(N-1,one,zero+1,v,op2);
	    }
	}
	
	vector<string> NBitBinary(int N)
	{
	    int one=0;
	    int zero=0;
	    string s="";
	    vector<string> v;
	    solve(N,one,zero,v,s);
	    sort(v.begin(),v.end(),greater<string>());
	    return v;
	}
};
