class Solution {
public:
    vector<vector<int>>dp;
    int help(int curr,int spaces,vector<int>&nums,int &k)
    {
        // base case
        if(curr==nums.size())
        return 0;
        
        if(dp[curr][spaces] != -1)
        {
            return dp[curr][spaces];
        }
        
        int a = INT_MAX;
        int newSpaces = spaces + 1 + nums[curr];
        if(newSpaces <= k)
        {
            a = help(curr+1, newSpaces, nums, k);
        }
        
        int b = help(curr+1, nums[curr], nums, k) + (k-spaces)*(k-spaces);
        
        return dp[curr][spaces] = min(a,b);
    }
    int solveWordWrap(vector<int>nums, int k) 
    { 
        // Aman Yadav
        int n = nums.size();
        dp.resize(n+1, vector<int>(k+1,-1));
        return help(1, nums[0], nums, k);
    } 
};