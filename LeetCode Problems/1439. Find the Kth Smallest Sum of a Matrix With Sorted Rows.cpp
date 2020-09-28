class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int r = mat.size();
        int c = mat[0].size();
        vector<int> v = mat[0];
        
        for(int i=1;i<r;i++){
            vector<int> temp;
            for(int j=0;j<c;j++){
                for(auto t:v){
                    temp.push_back(t+mat[i][j]);
                }
            }
            sort(temp.begin(),temp.end());
            int mn = min(k,(int)temp.size());
            v.resize(mn);
            for(int i=0;i<mn;i++){
                v[i] = temp[i];
            }
        }
        return v[k-1];
    }
};
