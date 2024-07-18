class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //Aman Yadav
    sort(a.begin(), a.end());
    int start, end;
    start = 0;
    end = m-1;
    
    long long ans = INT_MAX;
    
    while(end <= n-1){
        long long temp = a[end] - a[start];
        ans = min(ans, temp);
        start++;
        end++;
    }
    return ans;
    }   
};