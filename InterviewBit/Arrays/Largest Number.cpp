int myCompare(string X, string Y){ 
    string XY = X.append(Y); 
    string YX = Y.append(X); 
    return XY.compare(YX) > 0 ? 1: 0; 
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> s;
    for(int i=0;i<A.size();i++){
        s.push_back(to_string(A[i]));
    }
    sort(s.begin(), s.end(), myCompare);
    string str = "";
    for(int i=0;i<s.size();i++){
        str += s[i];
    }
    str.erase(0, min(str.find_first_not_of('0'), str.size()-1));
    return str;
}
