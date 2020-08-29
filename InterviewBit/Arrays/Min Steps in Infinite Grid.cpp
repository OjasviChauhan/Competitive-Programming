int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int count=0;
    for(int i=0;i<A.size()-1;i++){
        int d1 = abs(A[i+1]-A[i]);
        int d2 = abs(B[i+1]-B[i]);
        if(d1>d2)
            count+=d1;
        else
            count+=d2;
    }
    return count;
}
