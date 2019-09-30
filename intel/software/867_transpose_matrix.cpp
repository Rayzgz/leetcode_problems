class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<int> B(A.size(),0);
        vector<vector<int>> C(A[0].size(),B);
        for(int i = 0; i < A.size(); i++){
            for(int j = 0; j < A[i].size(); j++){
                C[j][i] = A[i][j];
            }
        }
        
        return C;
    }
};