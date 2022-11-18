class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>&grid)
    {
        int r=grid.size();
        int c=grid[0].size();
        if(i<0 || j<0 || i>=r || j>=c || grid[i][j]=='X')
        {
            return;
        }
        if(grid[i][j]=='C')
        {
            return;
        }
        grid[i][j]='C';
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
        dfs(i+1,j,grid);
        dfs(i,j+1,grid);
    }
    void solve(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        //Start dfs traversal from only boundary's O's
        //Moving over first row
        for(int i=1;i<c;i++)
        {
            if(grid[0][i]=='O')
            {
                dfs(0,i,grid);
            }
        }
        //Moving over Last row
        for(int i=0;i<r;i++)
        {
            if(grid[i][0]=='O')
            {
                dfs(i,0,grid);
            }
        }
        //Moving over first column 
        for(int i=0;i<r;i++)
        {
            if(grid[i][c-1]=='O')
            {
                dfs(i,c-1,grid);
            }
        }
        //Moving over first column
        for(int i=0;i<c;i++)
        {
            if(grid[r-1][i]=='O')
            {
                dfs(r-1,i,grid);
            }
        }

        //'O' are left over elements which are not connected to any boundary O, so flip them to 'X'    
        for(int i=1;i<r-1;i++)
        {
            for(int j=1;j<c-1;j++)
            {
                if(grid[i][j]=='O')
                {
                    grid[i][j]='X';
                }
            }
        }
        //'C' are elements which cannot be flipped to 'X', so flip them back to 'O'
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='C')
                {
                    grid[i][j]='O';
                }
            }
        }
    }
};