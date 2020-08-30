int Solution::solve(vector<int> &a) {
    map<int,int >m;
    vector<int>element;
    for(auto x:a){
        m[x]++;
    }
    for(auto x:m){
        element.push_back(x.first);
    }
    int n = element.size();
    for(int i= n-2;i>=0;i--){
        if(element[i] == m[element[i+1]]) 
            return 1;
        m[ element[i]] += m[ element[i+1]];
    }
    if(element[n-1]==0){
        return 1;
    }
    return -1;
}
