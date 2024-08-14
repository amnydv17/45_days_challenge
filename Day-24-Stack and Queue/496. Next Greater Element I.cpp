class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // base case
        if (nums2.empty() || nums1.empty()) {
            return {};
        }
        
        unordered_map<int, int> numberNGE;
        stack<int> numStack;
        
         for (int i = nums2.size() - 1; i >= 0; --i) {
            int current = nums2[i];
            
            
            while (!numStack.empty() && numStack.top() <= current) {
                numStack.pop();
            }
            
            if (numStack.empty()) {
                numberNGE[current] = -1;
            } else {
                numberNGE[current] = numStack.top();
            }

            numStack.push(current);
        }
        vector<int> result(nums1.size());
        
        for (int i = 0; i < nums1.size(); ++i) {
            result[i] = numberNGE[nums1[i]];
        }

        return result;
    }
};