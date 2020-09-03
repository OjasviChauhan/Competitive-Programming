vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> v;
    stack<int> s;
    for(int i=0;i<A.size();i++){
        if(s.empty()){
            v.push_back(-1);
        }
        else if(!s.empty() && A[i]>s.top()){
            v.push_back(s.top());
        }
        else if(!s.empty() && A[i]<=s.top()){
            while(!s.empty() && s.top()>=A[i]){
                s.pop();
            }
            if(s.empty())
                v.push_back(-1);
            else
                v.push_back(s.top());
        }
        s.push(A[i]);
    }
    return v;
}
