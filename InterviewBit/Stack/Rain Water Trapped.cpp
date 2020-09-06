vector<int> highestRight(vector<int> A,int n){
    vector<int> v;
    int right = A[n-1];
    v.push_back(right);
    for(int i=n-2;i>=0;i--){
        if(A[i]>right){
            v.push_back(A[i]);
            right = A[i];
        }
        else
            v.push_back(right);
    }
    reverse(v.begin(),v.end());
    return v;
}

vector<int> highestLeft(vector<int> A,int n){
    vector<int> v;
    int left = A[0];
    v.push_back(left);
    for(int i=1;i<n;i++){
        if(A[i]>left){
            v.push_back(A[i]);
            left = A[i];
        }
        else
            v.push_back(left);
    }
    return v;
}

int Solution::trap(const vector<int> &A) {
    int n = A.size();
    vector<int> l = highestLeft(A,n);
    vector<int> r = highestRight(A,n); 
    
    vector<int> area;
    for(int i=0;i<n;i++){
        area.push_back(min(l[i],r[i]) - A[i]);
    }
    int sum=0;
    for(int i=0;i<area.size();i++){
        sum += area[i];
    }
    return sum;
}
