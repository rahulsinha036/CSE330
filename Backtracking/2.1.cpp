class Solution
{
public:
void solve(vector<vector<int>>&grid,int row,int col,int n,int m,vector<int>temp,vector<vector<int>>&ans){
    if(row>=n||col>=m){
        return;
    }
    temp.push_back(grid[row][col]);
    if(row==n-1 && col==m-1){
        ans.push_back(temp);
        return;
    }
    solve(grid,row,col+1,n,m,temp,ans);
    solve(grid,row+1,col,n,m,temp,ans);
    temp.pop_back();
}
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
       vector<vector<int>>store;
       vector<int>temp;
       solve(grid,0,0,n,m,temp,store);
       reverse(store.begin(),store.end());
       return store;
    }
};
