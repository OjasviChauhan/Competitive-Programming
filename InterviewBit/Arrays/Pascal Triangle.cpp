vector<vector<int> > Solution::solve(int n) {
    vector<vector<int> > a;
    if(n==0)
        return a;
    vector<int> start(1,1);
    a.push_back(start);
    
    for(int i=1;i<n;i++){
        vector<int> row(1,1);
        for(int j=1;j<i;j++){
            int val = a[i-1][j]+a[i-1][j-1];
            row.push_back(val);
        }
        row.push_back(1);
        a.push_back(row);
    }
    return a;
}
