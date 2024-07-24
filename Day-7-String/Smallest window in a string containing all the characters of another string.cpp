class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Aman Yadav
        int count = 0;
        int mp[256] = {0};
        
        for(int i=0; i<p.length(); i++)
        {
            if(mp[p[i]]==0)
            {
                count++;
            }
            mp[p[i]]++;
        }
        
        int result = INT_MAX;
        int start = 0;
        int i=0,j=0;
        
        while(j<s.length())
        {
            mp[s[j]]--;
            
            if(mp[s[j]]==0) count--;
            
            if(count==0)
            {
                while(count==0)
                {
                    if(j-i+1 < result)
                    {
                        result = j-i+1;
                        start = i;
                    }
                    mp[s[i]]++;
                    if(mp[s[i]]==1) count++;
                    i++;
                }
            }
        j++;
        }
    if(result != INT_MAX)
    return s.substr(start, result);
    
    else return "-1";
        
    }
};