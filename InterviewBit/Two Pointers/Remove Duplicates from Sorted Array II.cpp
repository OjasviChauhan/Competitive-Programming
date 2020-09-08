int Solution::removeDuplicates(vector<int> &A) {
    unordered_map<int,int> mp;
    int n=A.size();
    for(int i=0;i<n;i++){
        mp[A[i]]++;
    }
    A.clear();
    for(auto x:mp){
        if(x.second==1){
            A.push_back(x.first);
        }
        else{
            A.push_back(x.first);
            A.push_back(x.first);
        }
    }
    sort(A.begin(),A.end());
    return A.size();
}
