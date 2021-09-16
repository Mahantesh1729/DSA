
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int a = 0, b = 0, c = 0, d = 0;
        int n = target.size();
        vector <int> arr(n);
        
        for(int i = 0; i < n; i++)
        {
            arr[i] = i;
        }
        reverse(arr.begin(), arr.end());
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(mat[i][j] != target[i][j])
                {
                    a = 1;
                }
                if(mat[j][arr[i]] != target[i][j])
                {
                    b = 1;
                }
                if(mat[arr[i]][arr[j]] != target[i][j])
                {
                    c = 1;
                }
                if(mat[arr[j]][i] != target[i][j])
                {
                    d = 1;
                }
            }
        }
        int sum = a + b + c + d;
        if(sum != 4) return true;
        
        return false;       
    }
};
