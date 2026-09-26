class Solution {
public:
    vector<vector<int>> generate(int row) {

    vector<vector<int>> ans(row);
    
    for (int i = 0; i < row; i++)
    {
        ans[i].resize(i+1);
 
        ans[i][0] = 1;
        
        for (int j = 1; j < i; j++) 
        ans[i][j] = ans[i-1][j-1] + ans[i-1][j];

        ans[i][i] = 1;
    }
    return ans;
}
};