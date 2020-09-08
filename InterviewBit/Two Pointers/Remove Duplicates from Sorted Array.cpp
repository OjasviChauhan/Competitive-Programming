int Solution::removeDuplicates(vector<int> &vec) {
    unordered_set<int> s;
    for (int i : vec)
        s.insert(i);
    vec.assign( s.begin(), s.end() );
    sort( vec.begin(), vec.end() );
    return vec.size();
}
