class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        vector<int>ans;

        int strow=0;
        int endrow=row-1;
        int stcol=0;
        int endcol=col-1;

        int count=0;
        int total=row*col;

        while(count<total)
        {
            for(int i=stcol; count<total && i<=endcol;i++)
            {
                ans.push_back(matrix[strow][i]);
                count++;
            }
            strow++;

            for(int i=strow; count<total && i<=endrow;i++)
            {
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;

            for(int i=endcol;count<total && i>=stcol;i--)
            {
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;

            for(int i=endrow;count<total && i>=strow;i--)
            {
                ans.push_back(matrix[i][stcol]);
                count++;
            }
            stcol++;
        }
        return ans;
    }
};