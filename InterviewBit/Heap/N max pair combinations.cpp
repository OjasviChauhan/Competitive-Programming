typedef pair<int, pair<int,int>> pi;
vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    priority_queue<pi> pq;
    set<pair<int,int>> S;
    int n = A.size();
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    pq.push({ A[n-1]+B[n-1], {n-1, n-1} });
    S.insert({n-1,n-1});

    vector<int> ans;
    int k=n;
    while(k--){
        pi top = pq.top();
        pq.pop();
        ans.push_back(top.first);
        int L = top.second.first;
        int R = top.second.second;
        
        if( R>0 && L>=0  && S.find({L,R-1}) == S.end() ){
            pq.push({ A[L]+B[R-1], {L,R-1} });
            S.insert({L,R-1});
        }
        if( R>=0 && L>0 && S.find({L-1,R})== S.end() ){
            pq.push({A[L-1]+B[R], {L-1,R}});
            S.insert({L-1, R});
        }
    }
    return ans;
}

// Time: O(NlogN)
// Space: O(N)
