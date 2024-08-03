class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Aman Yadav
        for(int i=0;i<n;i++)
        {
            int currIndex = arr[i]-1;
            while(0<=currIndex && currIndex <= n-1 && arr[i] != arr[currIndex])
            {
                swap(arr[i], arr[currIndex]);
                currIndex = arr[i]-1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i] != i+1)
            return i+1;
        }
    return n+1;
    } 
};