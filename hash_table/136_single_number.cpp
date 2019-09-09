class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i + 1] != nums[i]){
                return nums[i];
            }
            i += 1;
        }
        return nums[nums.size() - 1];
    }
};