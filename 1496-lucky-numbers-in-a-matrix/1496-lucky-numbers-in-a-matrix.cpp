class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
       
        int m=matrix.size();
        int n=matrix[0].size();
         vector<int>minrow(m);
        vector<int>maxrow(n);
        vector<int>result;
        for(int row=0;row<m;row++)
        {
            int minn=INT_MAX;
            for(int col=0;col<n;col++)
            {
                minn=min(minn,matrix[row][col]);
            }
            minrow[row]=minn;
        }
        for(int col=0;col<n;col++)
        {
            int maxx=INT_MIN;
            for(int row=0;row<m;row++)
            {
                maxx=max(maxx,matrix[row][col]);
            }
            maxrow[col]=maxx;
        }
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++)
            {
                    if(matrix[row][col]==minrow[row] && matrix[row][col]==maxrow[col])
                    {
                        result.push_back(matrix[row][col]);
                    }
            }
        }
        return result;
    }
};