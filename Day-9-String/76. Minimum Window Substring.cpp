class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        map<char,int>mp;
        
        for(char &ch:t)
        {
            mp[ch]++;
        }
        int reqCount=t.length();
        int i=0, j=0;
        int minStart = 0;
        int minWindow = INT_MAX;
        while(j<n)
        {
            char ch_j = s[j];
            if(mp[ch_j] >0)
            {
                reqCount--;
            }
            mp[ch_j]--;
            
            while(reqCount==0)
            {
                if(minWindow > j-i+1)
                {
                    minWindow = j-i+1;
                    minStart = i;
                }
                
                char ch_i = s[i];
                mp[ch_i]++;
                if(mp[ch_i] >0)
                 {
                     reqCount++;
                 }
                i++;
            }
        j++;
        }
    return minWindow == INT_MAX ? "" : s.substr(minStart, minWindow);
    }
};