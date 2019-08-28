class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // base case: empty array
        if(nums.size() == 0){
            return 0;
        }
        
        // loop until last element
        int i = 0;
        while(i < nums.size()){
            if(nums[i] == val){     // consecutive val
                nums.erase(nums.begin() + i);
            } else {    // check next
                i++;
            }
        }
        
        return nums.size();
    }
};