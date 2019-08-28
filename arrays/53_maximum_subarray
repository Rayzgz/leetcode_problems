class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        // return 0 for empty array
        if(nums.size() == 0){
            return 0;
        }
        
        // for each i, calculate the substring value from 0 to i - 1
        // if negative, then the maximum sum at i can only be nums[i]
        // if positive, then max at i is nums[i] + sum of substring(0, i-1)
        vector<int> subMax;
        subMax.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            subMax.push_back(subMax[i - 1] > 0 ? subMax[i - 1] + nums[i] : nums[i]);
        }
        
        auto it = max_element(begin(subMax), end(subMax));
        return *it;
    }
};