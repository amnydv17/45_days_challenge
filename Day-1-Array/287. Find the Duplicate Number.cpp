/*
step-1- initialize both slow and fast at first index
step-2- before going into loop slow move one step and fast move 2 step
step-3- in loop detect cycle means when slow and fast are meet
step-4- when cycle detect then again slow initialize to 1st
step-5- move slow and fast one-one step and where they meet that is duplicate number
*/


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        // Approach-1   O(nlogn)
        
        // sort(nums.begin(),nums.end());
        // int ans=0;
        // for(int i=0; i<nums.size();i++)
        // {
        //     if(nums[i]==nums[i+1])
        //     {
        //         return nums[i];
        //     }
        // }
        // return -1;
        
        
        // Approach-2  T.C.= O(n), S.C.=O(1); 
//         int slow = nums[0];
//         int fast = nums[0];
        
//         do{
//             slow = nums[slow];
//             fast = nums[nums[fast]];
//         }while(slow != fast);
       
//         slow  = nums[0];
//         while(slow != fast)
//         {
//             slow = nums[slow];
//             fast = nums[fast];
//         }
//     return slow;
    }
};