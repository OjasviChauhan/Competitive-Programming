string Solution::reverseString(string A) {
    stack<int> s;
    for(int i=0;i<A.size();i++){
        s.push(A[i]);
    }
    string str="";
    for(int i=A.size()-1;i>=0;i--){
        str+=s.top();
        s.pop();
    }
    return str;
}
