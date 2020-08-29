int Solution::firstMissingPositive(vector<int> &A) {
    vector<int> v;
    for(auto x:A){
        if(x>0){
            v.push_back(x);
        }
    }
    if(v.empty())
        return 1;
    int n = v.size();
    sort(v.begin(), v.end());
    int ans=0;
    bool flag = false;
    for(int i=1;i<=v.size();i++){
        if(i!=v[i-1]){
            ans = i;
            flag = true;
            break;
        }
    }
    if(flag) return ans;
    else return v[n-1]+1;
}
