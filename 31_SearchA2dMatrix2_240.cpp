class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int s = 0;
        int e = n-1;
        if(target>matrix[m-1][n-1]) return false;
        if(target<matrix[0][0]) return false;
        while(s<m && e>=0){ 
            if(matrix[s][e]==target) return true;
            else if(matrix[s][e]>target) e--;
            else if(matrix[s][e]<target) s++;
        }
        return false;
    }
};