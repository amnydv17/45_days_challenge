/*
step-1- Iterate the array counting number of 0's, 1's, and 2's.
step-2- Overwrite array with the total number of 0's, then 1's and followed by 2's.
*/


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        int count_0 = 0;
        int count_1 = 0;
        int count_2 = 0;
        
        for(int &num : nums) {
            if(num == 0)
                count_0++;
            else if(num == 1)
                count_1++;
            else
                count_2++;
        }
        
        for(int i = 0; i<n; i++) {
            if(count_0 > 0) {
                nums[i] = 0;
                count_0--;
            } else if(count_1 > 0) {
                nums[i] = 1;/*
step-1- Iterate the array counting number of 0's, 1's, and 2's.
step-2- Overwrite array with the total number of 0's, then 1's and followed by 2's.
*/


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
//         int count_0 = 0;
//         int count_1 = 0;
//         int count_2 = 0;
        
//         for(int &num : nums) {
//             if(num == 0)
//                 count_0++;
//             else if(num == 1)
//                 count_1++;
//             else
//                 count_2++;
//         }
        
//         for(int i = 0; i<n; i++) {
//             if(count_0 > 0) {
//                 nums[i] = 0;
//                 count_0--;
//             } else if(count_1 > 0) {
//                 nums[i] = 1;
//                 count_1--;
//             } else if(count_2 > 0) {
//                 nums[i] = 2;
//                 count_2--;
//             }
//         }
        
        
        int low = 0;
        int high = n-1;
        int mid = 0;
        
        while(mid<=high)
        {
            switch(nums[mid])
            {
                case 0:
                    swap(nums[low++], nums[mid++]);
                    break;
                    
                case 1:
                    mid++;
                    break;
                    
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
            }
        }
        
    }
};
                count_1--;
            } else if(count_2 > 0) {
                nums[i] = 2;
                count_2--;
            }
        }
    }
};