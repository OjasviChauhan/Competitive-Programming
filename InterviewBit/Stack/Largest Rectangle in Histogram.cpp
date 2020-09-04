vector<int> nextSmallerRight(vector<int> A,int n){
    vector<int> v;
    stack<pair<int,int>> s;
    
    for(int i=n-1;i>=0;i--){
        if(s.empty()){
            v.push_back(0);
        }
        else if(!s.empty() && s.top().first<A[i]){
            v.push_back(0);
        }
        else if(!s.empty() && s.top().first>=A[i]){
            while(!s.empty() && s.top().first>=A[i]){
                s.pop();
            }
            if(s.empty())
                v.push_back(n-i-1);
            else
                v.push_back(s.top().second-i-1);
        }
        s.push({A[i],i});
    }
    reverse(v.begin(),v.end());
    return v;
}

vector<int> nextSmallerLeft(vector<int> A,int n){
    vector<int> v;
    stack<pair<int,int>> s;
    
    for(int i=0;i<n;i++){
        if(s.empty()){
            v.push_back(0);
        }
        else if(!s.empty() && s.top().first<A[i]){
            v.push_back(0);
        }
        else if(!s.empty() && s.top().first>=A[i]){
            while(!s.empty() && s.top().first>=A[i]){
                s.pop();
            }
            if(s.empty())
                v.push_back(i);
            else
                v.push_back(i-s.top().second-1);
        }
        s.push({A[i],i});
    }
    return v;
}

int Solution::largestRectangleArea(vector<int> &A) {
    vector<int> r,l;
    int n = A.size();
    l = nextSmallerLeft(A,n);
    r = nextSmallerRight(A,n);
        
    int maxArea=0,area=0;
    for(int i=0;i<n;i++){
        area = A[i]*(l[i]+r[i]+1);
        if(area>maxArea)
            maxArea=area;
    }
    return maxArea;
}
