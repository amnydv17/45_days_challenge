class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int n = cardPoints.size();
        
        for(int i=0; i<k; i++)
        {
            sum += cardPoints[i]; 
        }
        if(k==n) return sum;
        int start = k;
        int end = n-1;
        
        int ans = sum;
        while(start>0)
        {
            sum -= cardPoints[--start];
            sum += cardPoints[end--]; 
            ans = max(ans, sum);
        }
    return ans;
    }
};