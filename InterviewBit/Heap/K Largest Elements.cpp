vector<int> Solution::solve(vector<int> &A, int B) {
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int> > pq;     // Creating a min-heap
    for(int i=0;i<A.size();i++){
        pq.push(A[i]);
        
        if(pq.size()>B){
            pq.pop();
        }
    }
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
