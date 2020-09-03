int Solution::solve(string A) {
    stack<char> s;
    for(int i=0;i<A.size();i++){
        if(A[i]=='(')
            s.push(A[i]);
        else if(A[i]==')' && !s.empty())
            s.pop();
        else 
            return 0;
    }
    if(s.empty())
        return 1;
    else
        return 0;
}
