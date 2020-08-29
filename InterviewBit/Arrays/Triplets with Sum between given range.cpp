int Solution::solve(vector<string> &A) {
    vector < double > arr;
    
    for (auto s:A)
        arr.push_back (stod (s));

    double a = arr[0], b = arr[1], c = arr[2];
    
    for (int i = 3; i < A.size ()+1; i++) {
        double sum = a+b+c;
        
        if (sum>1 && sum<2)
            return 1;
        
        if (i>=A.size())
            break;
        
        double x = arr[i];
        double m;
        if(sum>2){
            m = max(a, max(b,c));  //if sum>2 then remove the largest np. from triplet.
        }
        else if (sum<1){
            m = min(a, min(b,c));  //if sum<1 then remove the smallest no. from triplet.
        }
        else
            m = -1;   // if already sum is in required range then no need to change the triplet.
        
        if (m==a) a=x;
        else if (m==b) b=x;
        else if (m==c) c=x;
    }
    return 0;
}
