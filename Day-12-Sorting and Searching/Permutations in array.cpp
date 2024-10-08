class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        //Aman Yadav
        // Sort the array a[] in decreasing order.
        sort(a, a + n);
    
        // Sort the array b[] in increasing order.
        sort(b, b + n, greater<int>());
    
        // Checking condition on each index.
        for (int i = 0; i < n; i++)
            if (a[i] + b[i] < k)
                return false;
    
        return true;
    }
};